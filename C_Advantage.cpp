#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long

int32_t main()
{
    int t ;
    cin >> t ;
    while(t--){
        int n ; cin >> n ;
        vector <int> v(n);
        for(int i=0 ; i<n ; i++) cin >> v[i] ;
        vector <int> temp = v ;
        sort(temp.begin(),temp.end());
        int a = temp[n-1] , b = temp[n-2] ;
        // cout << a << " " << b << nl ;
        for(auto u : v) {
            if(u==a) cout << u - b << " ";
            else cout << u - a << " ";
        }
        // for(auto u : temp) cout << u << " ";
        cout << nl ;
    }    
    return 0;
}