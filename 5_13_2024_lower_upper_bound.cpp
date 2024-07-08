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
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i=0 ; i<n ; i++ ) cin >> v[i];
    int lb = lower_bound(v.begin(),v.end(),x) - v.begin();
    // cout << lb << nl ;
    int ub = upper_bound(v.begin(),v.end(),x) - v.begin();
    cout << lb <<" "<< ub-1 <<nl  ;
    return 0;
    // vector<int> v(n);
    // for(int i= 0 ; i<n ; i++) cin >> v[i];
    // auto it = find(v.begin(), v.end(), x);
    // if (it != v.end())
    // {
    //     int lb = lower_bound(v.begin(), v.end(), x) - v.begin();
    //     int ub = upper_bound(v.begin(), v.end(), x) - v.begin();
    //     cout << lb << " " << ub - 1 << nl;
    // }
    // else cout << -1 << nl;
    // return 0;
}