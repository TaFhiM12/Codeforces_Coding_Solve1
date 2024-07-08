#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t ; cin >> t ;
    while(t--){
        int k,q ; cin >> k >> q ;
        int kk[k],qq[q];
        for(int i=0;i<k;i++) cin >> kk[i];
        for(int i=0;i<q;i++) cin >> qq[i];
        vector<int>v;
        for(int i=0;i<q;i++){
            if(qq[i]<kk[0]) v.push_back(qq[i]);
            else v.push_back(kk[0]-1);
        }
        for(auto u : v ) cout << u << " ";
        cout << nl ; 
    }
    return 0;
}