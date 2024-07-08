#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int mod = 998244353;
int32_t main()
{
    optimize() int h, w;
    cin >> h >> w;
    int ans = 1, a = 2, n = h + w;
    while (n)
    {
        if (n & 1) ans = 1ll * ans * a % mod;
        a = 1ll * a * a % mod;
        n /= 2;
    }
    cout << ans << nl;
    return 0;
}
