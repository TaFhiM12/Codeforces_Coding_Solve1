#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

int32_t main()
{
    int n;
    cin >> n;
    vector<int> c(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; i * j <= n; j++)
            c[i * j]++;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) ans += (int)c[i] * c[n - i];
    cout << ans << nl;
}