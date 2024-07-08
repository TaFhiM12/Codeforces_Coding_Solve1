#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

bool cmp(pair<int,int> &a , pair<int,int> &b ){

    return a.second < b.second ;

}

int32_t main()
{
    optimize();
    int n ; cin >> n ;
    vector<pair<int,int>> vp(n) ;
    for(int i=0;i<n;i++) cin >> vp[i].first >> vp[i].second ;
    sort(vp.begin(),vp.end(),cmp);
    // for(auto u :vp ) cout << u.first << " "<<u.second << nl ;
    int cnt = 1 ;
    int a = vp[0].second ;
    for(int i=1;i<n;i++){
        if(a<=vp[i].first) {
            cnt++;
            a =  vp[i].second;
        }
    }
    cout << cnt << nl;
    return 0;
}