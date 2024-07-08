#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        map<int,int> mp;
        for (int i = 1; i <= n; i++)
        {
            int a; cin >> a;
            mp[a - i]++;
        }

        int ans = 0;
        for (auto u : mp) ans += ((u.second - 1) * u.second) / 2;
        cout << ans << nl;
    }
}