#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

// void solve(){
//     string s1 , s2 ;
//     cin >> s1 >> s2 ;
//     map<char,int> mp ;
//     for(auto u : s1) mp[u]++;
//     if(mp[s2[0]] == 0){
//         cout << -1 << nl ;
//         return;
//     }
//     else{
//         int ans = 0 ;
//         for(int i=0 ; i<s2.size();i++){
//             if(mp[s2[i]]>0) {
//                 ans++;
//                 mp[s2[i]]--;
//             }
//         }
//         cout << ans << nl ;
//     }
// }

// void solve(){
//     string str , str1 ;
//     cin >> str >> str1 ;
//     if(str[0] != str1[0]){
//         cout << -1 << nl ;
//     }
//     else{
//         int i=0 , j = 0 ,ans=0;
//         while(j){
//             cout << i << " "<<j << nl ;
//             if(str[i] == str1[j]) {ans++;i++,j++;}
//             else i++;
//         }
//         cout << ans << nl ;
//     }
// }

void solve(){
    int ans = 0 ;
    string a,b;cin >> a>> b ;
    unordered_map<char,int> f1,f2 ;
    for(auto u : a) f1[u]++;
    for(auto u : b) f2[u]++ ;
    set<char> st(b.begin(),b.end()) ;
    for(auto u : st){
        if(f1[u]==0) {
            cout << -1 << nl ;
            return;
        }
        ans += min(f1[u],f2[u]) ;
    }
    cout << ans << nl ;
}

int32_t main()
{
    optimize();
    solve();
    return 0;
}