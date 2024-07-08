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
    int n , x,y,z; cin >> n>>x>>y>>z;
    if((z>=x && z<=y) ||(z>=y && z<=x) ) cout << "Yes"<<nl;
    else cout << "No"<<nl;
    return 0;
}