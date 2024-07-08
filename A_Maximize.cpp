#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int mx = 1 , ans = n-1 ;
        int y = n-1 ;
        for(int i=y ; i>=1 ; i--){
            int a = gcd(n,i);
            // cout << "for " << i << ": " << a  << nl ;
            if(mx < a) {
                mx =  a ;
                ans = i ;
            }
        }
        cout << ans << nl ;
    }
    return 0;
}