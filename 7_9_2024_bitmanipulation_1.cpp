#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    // swap between two numbers.
    int a = 10 , b = 12;
    cout << "Before swap : " << a << " " << b  << nl ;
    a = a^b ;
    b = a^b ;
    a = a^b ;
    cout << "After swap : " << a << " " << b  << nl ;

    // check If the ith bit set(1) or unset(0).
    int N = 13 , i=1 ;
    if((N&(1<<i))) cout << "Set" << nl ;
    else cout << "Unset" << nl ;
    //or
    if((N>>i)& 1) cout << "Set" << nl ;
    else cout << "Unset" << nl ;

    //set the ith bit.
    int n = 9 , j = 2 ;
    cout <<( n | (1<<j)) << nl ; 
    /*
        9     = 1 0 0 1
        1<<2  = 0 1 0 0 
        9 | 1 << 2 = 1 0 0 1
                    0 1 0 0
                ----------------
        13         = 1 1 0 1
    */

    // clear the jth bit.
    n = 13 ;
    cout << (n & ~(1<<j)) << nl ;
    /*
       1<<2 == ..0100
       ~(1<<2) == ..1011
    */

    // count the number of set bits.
    int M = 84 ;
    int cnt = 0 ;
    while(M){
        M = M&(M-1) ;
        cnt++;
    }
    cout << "Number of Set bits in " << 84 << " is : " << cnt<< nl;

    return 0;
}