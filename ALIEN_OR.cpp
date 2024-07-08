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
    int n ; cin >> n ;
    int ans = 0 ;
    for(int i=0;i<n ; i++){
        int a ; cin >>a  ;
        ans += a%2!=0;
    }
    cout << ans << nl;
    return 0;
}