#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);


int32_t main()
{
    optimize();
    int n ;
    cin >> n ;
    vector <int>v(n);
    for(auto &i : v ) cin >> i ;
    sort(v.begin(),v.end());
    int q ; cin >> q ;
    while(q--){
        int x ;
        cin >> x ;
        cout << upper_bound(v.begin(),v.end(),x) - v.begin() << nl ;
    }
    return 0;
}