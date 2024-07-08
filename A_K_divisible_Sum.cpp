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
        int n , k ;
        cin >> n >> k;
        int m = ceil((n*1.000) / (k*1.000));
        cout  <<"m : "<< m << nl ;
        int ai = ceil(m * 1.00 / n * 1.00);
        cout << ai << nl ;
    }
    return 0;
}