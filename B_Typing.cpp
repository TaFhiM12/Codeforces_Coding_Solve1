#include<bits/stdc++.h>
#define eb emplace_back
#define nl "\n" 
using namespace std ;
typedef vector<int> vi ;
#define int long long
#define YES cout << "YES"<<nl
#define NO cout << "NO"<<nl
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    string s , t ; cin >> s >> t ;
    int cnt = 0 ; 
    vector<int>v;
    // for(int i=0;i<s.size();i++){
    //     for(int j=cnt ; j<t.size();j++){
    //         if(s[i] == t[j]){
    //             v.push_back(j+1);
    //             cnt = j+1 ;
    //             continue;
    //         }
    //     }
    // }
    // for(auto u : v) cout << u <<" ";
    // cout << nl;
    int i=0,j=0;
    while(j<t.size())
    {
        if(s[i] ==t[j]){
            v.push_back(j+1);
            i++;
        }
        j++;
    }
    for(auto u : v) cout << u <<" ";
    cout << nl ;
    return 0;
}