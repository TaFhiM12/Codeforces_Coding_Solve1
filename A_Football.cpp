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
    cin >>n ;
    map <string ,int> mp ;
    for(int i=0 ; i<n ; i++){
        string str ;
        cin >> str ;
        mp[str]++;
    } 

    string ans;
    int tmp = 0 ;
    for(auto u : mp ){
        if(u.second>tmp){
            tmp = u.second;
            ans = u.first ;
        }
    }
    cout << ans << nl ;
    return 0;
}