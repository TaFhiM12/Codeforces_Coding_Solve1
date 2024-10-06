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
        vector <int> v(n);
        int cnt_odd = 0 , cnt_even = 0 ;
        for(int i=0 ; i<n ; i++){
            cin >> v[i] ;
            if(v[i] & 1) cnt_odd ++ ;
            else cnt_even++;
        }
        if((n%2 != 0 && ((n/2)+1 != cnt_even)) || (n%2 == 0 && cnt_even != cnt_odd )) cout << -1 << nl; 
        else {
            int ans = 0 ;
            for(int i= 0 ; i<n ; i++){
                if((i%2==0 && v[i]%2 !=0) || (i%2!=0 && v[i]%2==0)) ans ++;
                
            }
            cout << ans/2 << nl ;
        }
    }
    return 0;
}