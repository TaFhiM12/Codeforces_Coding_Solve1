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
    int n, w;
    cin >> n >> w;
    int sum = 0;
    vector<int> pre(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        sum += a;
        pre[i] = sum;
    }
    // for (auto u : pre)
    //     cout << u << nl;
    int ans = INT_MAX;
    int cnt = 0;
    if (n == w)
        cout << 1 << nl;
    else
    {
        int i = n;
        while (i > w-1)
        {
            if (ans > pre[i] - pre[i-w])
            {
                ans = pre[i] - pre[i-w];
                cnt = i-w+1;
            }
            // cout << pre[i] - pre[i-w] << nl ;
            i--;

        }
        cout << cnt << nl;
    }
    return 0;
}