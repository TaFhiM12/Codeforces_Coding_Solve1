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
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, l, r, cnt = 0;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        for (int i = 0; i < n; i++)
        {
            int u = upper_bound(a.begin(), a.begin() + i, r - a[i]) - a.begin(),
                lb = lower_bound(a.begin(), a.begin() + i, l - a[i]) - a.begin();
            cnt += u - lb;
        }
        cout << cnt << nl;
    }
    return 0;
}