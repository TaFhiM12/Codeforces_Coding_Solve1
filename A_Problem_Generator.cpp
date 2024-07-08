#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s; cin >> s;
        string str = "ABCDEFG";
        map<char, int> mp;
        for (auto u : s) mp[u]++;
        
        int ans = 0;
        for (auto u : str)
        {
            if (mp[u] <= m) ans += (m - mp[u]);
        }
        cout << ans << nl;
    }
    return 0;
}