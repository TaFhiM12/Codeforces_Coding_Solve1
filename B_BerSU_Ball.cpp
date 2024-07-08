#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n, m, ans = 0, x; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    x = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = x; j < m; j++)
        {
            if (abs(a[i] - b[j]) <= 1)
            {
                ans++;
                x = j + 1;
                break;
            }
        }
    }

    cout << ans << endl;
}
