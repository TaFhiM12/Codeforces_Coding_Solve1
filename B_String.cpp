#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mod = 1e9 + 7 ;

int32_t main()
{
    optimize();
    int n  ;  cin >> n ;
    string str ; cin >> str ;
    int mul = 1 ;
    for(int i=0 ; i<str.size() ; i++){
        int a = str[i] -  96 ;
        cout << a << nl ;
        mul *= a ;
    }
    int ans = mul % mod ;
    cout << ans << n;
    return 0;
}