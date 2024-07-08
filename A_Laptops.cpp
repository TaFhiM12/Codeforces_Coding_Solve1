#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

bool cmp(pair<int,int>a , pair<int,int>b){
    return a.second > b.second ;
}

void solve(){
    int n ;
    cin >> n ;
    vector < pair<int,int> > v ;
    for(int i=0 ; i<n ; i++){
        int a , b ;
        cin >> a >> b ;
        v.push_back({a,b});
    } 
    sort( v.begin() , v.end() , cmp );
    for(int i=0 ; i<n-1 ; i++){
        if(v[i].first < v[i+1].first && v[i].second > v[i+1].second ){
            cout  << "Happy Alex" << nl ;
            return;
        }
    }
    cout << "Poor Alex" << nl ;
}

int32_t main()
{
    optimize();
    solve();
    return 0;
}