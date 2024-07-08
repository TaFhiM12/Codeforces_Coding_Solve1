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
    int t ; cin >> t;
    while(t--){
        int n , k ; cin >> n >> k ;
        vector<int> v(n) ; 
        for(auto &i : v ) cin >> i ;
        int cnt = v[n/2];
        int c = 0 ;
        for(int i=0 ; i<n ; i++){
            if(abs(v[i]-cnt) >  k){
                 c++;
                 cnt = v[i];
            }
        }
        cout << c << nl;
    }
    return 0;
}