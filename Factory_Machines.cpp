#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);


int32_t main()
{
    optimize();
    int n , t ;
    cin >> n >> t ;
    int a[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> a[i] ;
    }
    
    auto ck = [&](int x)->bool{
        int sum = 0 ;
        for(int i=0 ; i<n ; i++){
            sum += x / a[i];
        }
        return sum >= t ;
    };

    int l = 0 , r = 1 , ans = 0 ;
    while(!ck(r)) r*=2 ;
    while(l<=r){
        int mid = (l+r) / 2 ;
        if(ck(mid)){
            ans = mid ;
            r =  mid - 1 ; 
        }else l = mid + 1 ;
    }
    cout << ans << nl ;
    return 0;
}