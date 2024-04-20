template <typename T, typename P>
ll bin_pow(T a, P b) {
    if (b == 0) return 1LL;
    if (b == 1) return (ll) a;
    ll result = bin_pow(a, b / 2);
    return (((result * result) % MOD) * (b&1 ? a : 1)) % MOD;
}
