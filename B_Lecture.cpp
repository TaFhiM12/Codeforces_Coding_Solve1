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
    cin >> n >> m ;
    vector<pair<string,string>> v1(m) ;
    for(int i=0;i<m;i++){
        cin >> v1[i].first >> v1[i].second ;
    }
    // for(auto u : v1) cout << u.first <<" "<<u.second << nl ;
    vector <string> v2 ;
    for(int i=0 ; i<n ; i++){
        string s ; 
        cin >> s ;
        v2.push_back(s);
    }


    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<=m ; j++){
            if(v2[i] == v1[j].first || v2[i] == v1[j].second){
                if(v1[j].first.size()<= v1[j].second.size()){
                    v2[i] = v1[j].first;
                }
                else {
                    v2[i] = v1[j].second ;
                }
            }
        }
    }
    
    for(auto u : v2) cout << u << " ";
    cout << nl ;

    return 0;
}