#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n ; cin >> n ;
    unordered_map <int,int> mp ;
    for(int i=0 ; i<n ; i++){
        int a ;
        cin >> a ;
        mp[a]++;
    }
    int ans = 0 ;
    for(auto u : mp){
        ans += u.second/2 ;
    }
    cout << ans / 2 << nl ;
    return 0;
}