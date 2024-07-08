#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int solve() {
    int a , b , c ; cin >> a >> b >> c  ;
    int ans = a ;
    while(b%3 != 0 && c>0){
        b++;
        c--;
    }
    if(b%3 != 0) return -1 ;
    return ans + b/3 + (c+2)/3 ; 
}

int32_t main()
{
    optimize();
    int t ; cin >> t ;
    while(t--){
        cout << solve() << nl  ;
    }
    return 0;
}