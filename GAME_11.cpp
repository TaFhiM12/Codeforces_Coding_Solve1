#include <bits/stdc++.h>
#define eb emplace_back
#define nl "\n"
using namespace std;
typedef vector<int> vi;
#define int long long
#define YES cout << "YES" << nl
#define NO cout << "NO" << nl
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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for(auto &ele : a) {
            cin >> ele;
        }
        for (auto &ele : b) {
            cin >> ele;
        }
        if(n < 4 or m < 4 or m + n < 11) {
            cout << -1 << '\n';
        }else {
            sort(a.rbegin(), a.rend());
            sort(b.rbegin(), b.rend());
            int ans = 0;
            for (int i = 0; i < 4; i++) {
                ans += a[i];
                ans += b[i];
            }
            vector<int> last;
            for (int i = 4; i < n; i++) {
                last.push_back(a[i]);
            }
            for (int i = 4; i < m; i++) {
                last.push_back(b[i]);
            }
            sort(last.rbegin(), last.rend());
            int sz = last.size();
            for (int i = 0; i < min(3ll, sz); i++) {
                ans += last[i];
            }
            cout << ans << endl;
        }
    
    }
    return 0;
}