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
    int ans = 0 ;
    while(n){
        if(n % 2 == 1 ){
            ans++;
        }
        n /= 2 ;
    }
    cout << ans << nl ;
    return 0;
}