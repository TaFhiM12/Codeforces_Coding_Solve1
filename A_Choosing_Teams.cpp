#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n , k ; cin >> n >> k ;
    vector<int> v;
    for(int i=0 ; i<n ; i++){
        int a ; cin >> a ;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int ans = 0 ,cnt = 0 ;
    for(auto u : v){
        if((5-u)>=k){
            cnt++;
        }
        if(cnt == 3){
            ans++;
            cnt = 0 ;
        }
    }

    cout << ans << nl ;
    return 0;
}