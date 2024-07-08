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
    int temp  = min(n,m);
    if(temp % 2 == 1) cout << "Akshat" << nl;
    else cout << "Malvika" << nl ;
    return 0;
}