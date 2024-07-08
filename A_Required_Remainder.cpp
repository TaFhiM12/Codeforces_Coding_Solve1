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
    cin >> t;
    while(t--){
        int x , y , n ;
        cin >> x >> y >> n ;
        if(n%x == y) cout << n << nl ;
        else{
            if(n%x > y){
                int div = n/x ;
                n = div*x+ y;
            }
            else {
                int div =  n/x - 1 ;
                n = div *x +y ; 
            }
            cout << n << nl ;
        }
    }
    return 0;
}