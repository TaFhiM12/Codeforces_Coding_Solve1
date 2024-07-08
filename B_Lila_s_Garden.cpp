#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

bool isPrime(int n ) {
    int cnt = 0 ;
    for(int i=1; i*i<=n ; i++){
        if(n%i == 0 ) {
            cnt++;
            if(n%i != i) cnt++ ;
        }
        if(cnt > 2 ) return false;
    }
    return true ;
}

int32_t main()
{
    optimize();
    int n ;
    int ans ;
    while(cin >> n){
        if(n==0) continue;
        if(isPrime(n)){
            for(int i=2*n+1 ; i ; i++){
                if(isPrime(i)) {
                    ans = i ;
                    break;
                }
            }
            cout << ans << nl ;
        }
        else if(!isPrime(n)){
            for(int i=2*n+1 ; i ; i++){
                if(isPrime(i)) {
                    ans = i ;
                    break;
                }
            }
            cout << ans <<" (" << n << " is not prime)" <<nl ;
        }
    }
    return 0;
}