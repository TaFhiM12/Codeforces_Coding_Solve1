#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);


bool  solve(int n){
    for(int i=2 ; i <= sqrt(n) ; i++){
        if(n%i==0) return false;
    }
    return true;
}


int32_t main()
{
    optimize();
    int n , nn ; cin >> n >> nn ;
    int temp = 0 ;
    for(int i=n+1 ; i<=nn ; i++ ){
        if(solve(i)){ temp = i ;break;}
    }

    if(temp == nn) cout << "YES" << nl ;
    else cout << "NO" << nl ;
    return 0;
}