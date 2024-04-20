// Given example is for Dynamic Range Sum Queries

vector<ll> segtree;
 
void update(int idx, ll v) {
    ll diff = v - segtree[idx];
 
    while (idx) {
        segtree[idx] += diff;
        idx >>= 1;
    }
}
 
ll get(int l, int r, int segl, int segr, int node) {
    // If segment is inside of query
    if (l <= segl && segr <= r) return segtree[node];
    if (segr < l || r < segl) return 0;
    int mid = (segl + segr) / 2;
    return get(l, r, segl, mid, 2 * node) + get(l, r, mid + 1, segr, 2 * node + 1);
}

// Fill segment tree
void solve () {
    int n, q; cin >> n >> q;
    vector<int> a(n); FOR(n) cin >> a[i];

    int nn = 1;
    while (nn < n) nn <<= 1;
    segtree.clear();
    segtree.resize(2*nn);
    fill(segtree.begin(), segtree.end(), 0);

    FOR(n) {
        segtree[i + nn] = a[i];
    }
    for (int i = 2 * nn - 1; i > 1; i--) {
        segtree[i>>1] += segtree[i];
    }

    FOR (q) {
        int ty, x, y; cin >> ty >> x >> y;
        if (ty == 1) update(nn + x - 1, (ll)y);
        else cout << get(x, y, 1, nn, 1) << "\n";
    }
}