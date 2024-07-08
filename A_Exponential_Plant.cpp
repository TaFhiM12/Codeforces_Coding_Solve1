#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n ; cin >> n ;
    int ans  = 0 ;
    int a = 0;
    for(int i=0 ; i<1e9; i++){
        int sum = pow(2LL,i) ;
        ans += sum ;
        if(ans > n) {a = i+1 ;break;}
    }
    cout << a << nl ;
    return 0;
}