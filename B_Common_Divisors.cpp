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
    int n,s;
    cin >> n;
    cin >> s ;
    for (int i = 1; i < n; i++)
    {
        int a; cin >> a;
        s = gcd(s, a);
    }
    int ans = 0;
    for (int i = 1; i <= (int)sqrt(s); i++)
    {
        if (s % i == 0)
        {
            ans++;
            if (s / i != i)
                ans++;
        }
    }
    cout << ans;
    return 0;
}