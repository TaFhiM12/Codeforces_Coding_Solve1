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
        for(int i=0;i<n;i++){
            cin >> v[i] ;
        }
        sort(v.begin(),v.end());
        int cnt  = 0;
        if(v[0]>0) cnt ++;
        for(int i=0 ; i<n ; i++){
            if(i>=v[i]) v[i] = 1 ;
            else v[i] = 0 ;
        }
        v.resize(unique(v.begin(),v.end())-v.begin());
        for(auto u : v){
            if(u==1) cnt++ ;
        }
        cout << cnt << nl ;
    }
    return 0;
}