#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int r,b;
    cin >> r >> b ;
    
    int ans1 = min(r,b);
    int ans2 = abs(r-b)/2 ;
    
    cout << ans1 << " "<< ans2 << nl ;
    return 0;
}