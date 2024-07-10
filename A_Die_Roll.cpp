#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n , m ; cin >> n >> m ;
    int temp = max(n,m);
    int ans = 6-temp+1 ;
    if(ans == 6) cout << "1/1" << nl ;
    else if(ans ==5) cout << "5/6" << nl ;
    else if(ans == 4) cout << "2/3" << nl ;
    else if(ans == 3) cout << "1/2" << nl ;
    else if(ans == 2 ) cout << "1/3" << nl ;
    else if(ans == 1) cout << "1/6" << nl ;
    return 0;
}