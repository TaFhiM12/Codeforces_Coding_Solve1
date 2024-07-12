#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int ans = 0 ;
    int a[] = {2,2,4,5,5,6,6,1,1} ;
    for(int i=0 ; i<9 ; i++){
        ans = ans ^ a[i];
    }
    cout << ans << nl ;
    return 0;
}