#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n ; 
    cin >> n ;
    map<string , int > mp ;
    string str ;
    for(int i=0;i<n;i++){
        cin >> str ;
        mp[str]++;
    }
    
    int ans = 0 ;
    for(auto u : mp){
        ans = max(ans , u.second) ;
    }
    
    cout << ans << nl ;

    return 0;
}