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
    int sum = 0 ;
    vector <pair<string,int>> v(n);
    for(auto &i : v) {cin >> i.first >> i.second ; sum += i.second;}
    sort(v.begin(),v.end());
    // for(auto u : v) cout << u.first << " " << u.second << nl ;
    int ans =  sum % n ;
    cout << v[ans].first << nl ;
    // cout << sum << nl ;
    return 0;
}