#include<bits/stdc++.h>
using namespace std ;
#define int long long

void solve(){
    int n , k ; cin >> n >> k;
    for(int i=1;i<=k ; i++) cout << i << " ";
    for(int i=n ; i>k ; i--) cout << i << " ";
    cout << endl;
}

int32_t main()
{
    int t ; cin >> t ;
    while(t--){
        solve();
    }
    return 0;
}