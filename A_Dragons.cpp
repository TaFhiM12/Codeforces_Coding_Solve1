#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

bool cmp(pair<int,int>&a,pair<int,int>&b){
    return a.first < b.first ;
}

int32_t main()
{
    optimize();
    int n , s ;
    cin >> s >> n ;
    vector <pair<int,int>> v(n);
    bool check = true ;
    for(int i=0 ;i<n;i++) cin >> v[i].first >> v[i].second ;
    sort(v.begin(),v.end(),cmp);
    // for(auto u : v) cout << u.first << " "<<u.second << nl ;
    for(int i=0;i<n;i++){
        if(v[i].first<s){
            s+=v[i].second;
        }
        else {
            check = false;
            break;
        }
    }
    if(check) cout << "YES" << nl ;
    else cout << "NO" << nl;
    
    return 0;
}