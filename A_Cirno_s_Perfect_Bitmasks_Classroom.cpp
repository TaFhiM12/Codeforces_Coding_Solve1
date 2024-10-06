#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int ffs(int n){
    for(int i=0;i<=31 ; i++){
        if((n>>i)&1) return i ;
    }
}

void solve(int n ){
    if(n==1) cout << 3 << nl ;
    else if((n&(n-1)) == 0 ) cout << n+1 << nl ;
    else {
        int ind = ffs(n);
        cout << ( 1 << ind) << nl ;
    }
}

int32_t main()
{
    optimize();
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        solve(n);
    }
    return 0;
}