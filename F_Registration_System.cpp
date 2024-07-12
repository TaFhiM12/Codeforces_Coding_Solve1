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
    map<string, int> mp;
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        if (mp[s] == 0) cout << "OK" << nl;
        else cout << s << mp[s] << nl;
        mp[s]++;
    }
    return 0;
}