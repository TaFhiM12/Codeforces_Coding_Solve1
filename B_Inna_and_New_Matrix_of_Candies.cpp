#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n , m ; 
    int cnt = INT_MAX ;
    cin >> n >> m ;
    map<int,int> mp ;
    set <int> st ;
    while(n--){
        string str ;
        cin >> str  ;
        // cout << str << nl ;
        int p = 0 , q = 0  ;
        for(int i=0;i<m;i++){
            if(str[i] == 'G') p = i ; 
            else if(str[i] == 'S') q = i ;
        }
        cnt = min(cnt , q-p);
        st.insert((q-p));
    }
    if(cnt<0) cout << -1 << nl ;
    else {
        // int ans = INT_MIN ;
        // for(auto u : mp){
        //     if(u.second > ans) ans = u.first;
        // }
        cout << st.size() << nl ;
    }
    return 0;
}