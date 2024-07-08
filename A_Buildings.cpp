#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t = 1 ;  
    // cin >> t ;
    while(t--){
        int n ,ans=0; cin >> n ;
        int a ; cin >> a ;
        for(int i=1;i<n;i++){
            int b ; cin >> b ;
            if(b>a) {ans = i+1;break;}
        }
        if(ans==0) cout << -1 << nl;
        else cout << ans << nl ;
    }
    return 0;
}