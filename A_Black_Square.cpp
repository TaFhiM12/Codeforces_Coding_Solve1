#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int a[5];

int32_t main()
{
    optimize();
    for(int i = 1 ; i<=4 ; i++) cin >> a[i];
    string str ; cin >> str ;
    int ans = 0 ;
    for(auto u : str){
        int a1 = u - '0' ;
        ans += a[a1];
    }
    cout << ans << nl ;
    return 0;
}