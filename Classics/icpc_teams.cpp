bool dp[51][501][501] = {false};
 
void solve() {
        int n, a, b, c; cin >> n >> a >> b >> c;
        int t[n]; FOR(n) cin >> t[i];
 
        int sum = 0;
        FOR(n) sum += t[i];
 
        dp[1][t[0]][0] = true;
        dp[1][0][t[0]] = true;
        dp[1][0][0] = true;
 
        for (int tasks = 1; tasks < n; tasks++) {
                int taskToadd = t[tasks];
                for (int i = 0; i < 501; i++) {
                        for (int j = 0; j < 501; j++) {
                                if (dp[tasks][i][j]) {
                                        dp[tasks + 1][i + taskToadd][j] = true;
                                        dp[tasks + 1][i][j + taskToadd] = true;
                                        dp[tasks + 1][i][j] = true;
                                }
                        }
                }
        }
        int ans = 10000;
        for (int i = 0; i < 501; i++) {
                for (int j = 0; j < 501; j++) {
                        if (dp[n][i][j]) {
                                int time_a = ceil((long double)i / (long double)a);
                                int time_b = ceil((long double)j / (long double)b);
                                int k = sum - i - j;
                                int time_c = ceil((long double)k / (long double)c);
 
                                int totalTime = max({time_a, time_b, time_c});
                                ans = min(ans, totalTime);
                        }
                }
        }
        cout << ans;
}