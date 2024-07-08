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
    vector <int> v ;
    for(int i=0 ; i<n ; i++){
        int a ; cin >> a ;
        v.push_back(a);
    }
    int temp = *max_element(v.begin(),v.end());
    int ans = 0 ;
    for(auto u : v){
        ans += abs(temp-u);
    }
    cout << ans << nl ;
    return 0;
} 