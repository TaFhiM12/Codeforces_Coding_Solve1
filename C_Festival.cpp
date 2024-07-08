#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n , m ; cin >> n >> m ;
    vector<int> v(m);
    for(int i=0 ; i<m ; i++) cin >> v[i];
    for(int i=1 ; i<=n ; i++){
        auto it = lower_bound(v.begin(),v.end(),i);
        cout << (*it - i) << nl;
    }
    
    return 0;
}