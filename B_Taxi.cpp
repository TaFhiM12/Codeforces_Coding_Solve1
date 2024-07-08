#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n ;
    cin >> n ;
    unordered_map<int,int> mp;
    for(int i=0 ; i<n ; i++) {
        int a ; cin >> a ;
        mp[a]++;
    }

    int ans = mp[4];
    while(mp[1] != 0 && mp[3] != 0){
        ans++;
        mp[1]-- , mp[3]--;
    }
    if(mp[3] != 0) {
        ans += mp[3];
        mp[3] = 0 ;
    }
    ans += (mp[2]*2)/4 ;
    if((mp[2]*2)%4 != 0){
        if(mp[1]<=2){
            mp[1]=0;
            mp[2]=0;
            ans++;
        }
        else {
            mp[1] -= 2;
            ans++;
        }
    }
    if(mp[1] !=0){
        ans += mp[1]/4 ;
        if(mp[1]%4 !=0) ans++;
    }
    cout << ans << nl ;
    return 0;
}