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
    vector<int> v(n,0);
    unordered_map<int , int > mp ;
    for(auto &i : v) {cin >> i ;mp[i]++;}
    int mx = *max_element(v.begin(),v.end());
    int mn = *min_element(v.begin(),v.end());
    cout << mn <<" "<< mx  << nl << "************** '\\n\'" <<nl;
    for(auto u : mp) cout << u.first <<" "<<u.second << nl;
    return 0;
}