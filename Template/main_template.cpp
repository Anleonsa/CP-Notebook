#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

// https://cplusplus.com/reference/chrono/duration/ -> duration types
#define delay(time) this_thread::sleep_for(std::chrono::seconds(time));
#define ll long long
#define pb push_back
#define mp make_pair
#define FOR(n) for (int i = 0; i < n; i++)
#define FORj(n) for (int j = 0; j < n; j++)

void solve () {

}

signed main () {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("text.in", "r", stdin);
    //freopen("text.out", "w", stdout);
    int T = 1;
    cin >> T;
    while(T--) solve();
    return 0;
}
