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
        vector<int> v(3);
        for (int i = 0; i < 3; i++) cin >> v[i];
        sort(v.begin(), v.end());
        for (int i = 0; i < 5; i++)
        {
            v[0] += 1;
            sort(v.begin(), v.end());
        }
        int ans = 1;
        for (int i = 0; i < 3; i++)  ans *= v[i];
        cout << ans << endl;
    }

    return 0;
}
