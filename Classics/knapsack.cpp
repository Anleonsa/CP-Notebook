ll dp[2000][2001] = {0};

void solve() {
    int s, n; cin >> s >> n;
    ll w[n], v[n];

    FOR(n) {
        cin >> w[i] >> v[i];
    }

    if (w[0] <= s)
        dp[0][w[0]] = v[0];

    for(ll i = 0; i < n - 1; i++) {
        for (ll we = 0; we <= s; we++) {
            dp[i + 1][we] = max(dp[i][we], dp[i + 1][we]);
            if (we + w[i + 1] <= s)
                dp[i + 1][we + w[i + 1]] = max(dp[i][we] + v[i + 1], dp[i + 1][we + w[i + 1]]);
        }
    }
    ll ans = 0;
    for (int we = 0; we <= s; we++) {
        ans = max(dp[n - 1][we], ans);
    }
    cout << ans << "\n";
}