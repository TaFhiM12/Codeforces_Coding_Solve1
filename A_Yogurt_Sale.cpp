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
        int n , a , b  ;
        cin >> n >> a >> b  ;
        if(2*a > b ){
            int temp = n/2 ;
            if(n%2 == 0) cout << temp*b << nl ;
            else cout << temp*b + a << nl ;
        }
        else cout << a*n << nl ;
    }
    return 0;
}