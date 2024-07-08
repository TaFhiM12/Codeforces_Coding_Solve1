#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n  ; cin >> n ;
    // cout << to_string(n) << nl ;
    for(int i=n ;i<= 919 ; i++){
        int a = i ;
        string str = to_string(a);
        int c1 =  str[0] - '0';
        int c2 =  str[1] - '0';
        int c3 =  str[2] - '0';
        if(c1*c2 == c3) {
            cout << i << nl ;
            break;
        }
    }
    return 0;
}