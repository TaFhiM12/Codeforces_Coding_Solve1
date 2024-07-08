#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long

void solve(){
    vector<string> v(8);
    string str = "RRRRRRRR";
    for(int i=0;i<8;i++) cin >> v[i] ;
    for(int i=0;i<8;i++){
        if(v[i] == str) {
            cout << "R" << nl;
            return ;
        }
    }
    cout << "B" << nl ;
}

int32_t main()
{
    int t ;
    cin >> t ;
    while(t--){
        solve();
    }
    return 0;
}