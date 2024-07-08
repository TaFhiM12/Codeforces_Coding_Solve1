#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector <int> v(n);
        for(auto &i : v) cin >> i ;
        if(v[0] == v[n-1]) cout << "NO" << nl ;
        else {
            cout << "YES"<<nl;
            cout << "RB";
            for(int i=2;i<=n-1 ; i++) cout << "R";
            cout << nl ;
        }
    }
    return 0;
}