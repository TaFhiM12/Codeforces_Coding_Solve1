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
    while (t--){
        int n;
        cin >> n;
        
        vector<int> v[n + 1];
        for (int i = 0; i < n; i++){
            int m;
            cin >> m;
            for (int j = 0; j < m; j++)
            {
                int a;
                cin >> a;
                v[i].push_back(a);
            }
        }

        vector<int> u;
        int mn = INT_MAX, mn2 = INT_MAX;
        for (int i = 0; i < n; i++){
            sort(v[i].begin(), v[i].end());
            u.push_back(v[i][1]);
            mn = min(v[i][1], mn);
            mn2 = min(mn2, v[i][0]);
        }

        sort(u.rbegin(), u.rend());
        int sum = 0;
        for (int i = 0; i < n; i++) sum += u[i];
        sum -= mn;
        sum += mn2;
        cout << sum << '\n';
    }

    return 0;
}