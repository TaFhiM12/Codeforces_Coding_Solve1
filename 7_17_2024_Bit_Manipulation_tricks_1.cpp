#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    //count the number of set bit in a number ...
    int ans = __builtin_popcountll(5);
    cout << ans << nl ;

    //we can add two number using bit_manipulation....
    int a = 10 , b = 5 ;
    int add = (a|b) + (a&b) ;
    //or
    add = (a^b) + 2*(a&b) ;
    cout << add << nl ;
    
    //check odd/even 
    bool chck = (10&1);
    if(chck) cout << "Odd" << nl ;
    else cout << "Even" << nl ;
    // cout << chck<<nl;

    //check if the number is the power of 2..
    int n = 128 ;
    if(n&(n-1)) cout << "No" << nl ;
    else cout << "Yes" << nl ;

    //
    return 0;
}