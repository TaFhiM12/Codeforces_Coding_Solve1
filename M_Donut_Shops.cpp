#include<bits/stdc++.h>
#define eb emplace_back
#define nl "\n" 
using namespace std ;
typedef vector<int> vi ;
#define int long long
#define YES cout << "YES"<<nl
#define NO cout << "NO"<<nl
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t; cin >> t ;
    while(t--){
        int cost_a , b , cost_b ; cin >> cost_a>> b >> cost_b ;
        if(cost_a < cost_b) cout << 1 <<" ";
        else cout << -1 << " ";
        if(cost_a*b > cost_b ) cout << b << nl ;
        else cout << -1 << nl ;

    }
    return 0;
}