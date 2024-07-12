#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n ; cin >> n ;
    vector <int> v(n);
    for(auto &i : v) cin >> i ;
    int ans = 0 ;
    for(int i=0 ; i<=31 ; i++){
        int cnt = 0 ;
        for(int j=0 ; j<n ; j++){
            if(v[j]&(1<<i)) cnt++;
        }

        if(cnt%3 == 1 ) ans = ans  | (1<<i) ;
    }

    cout << ans << nl ;
    return 0;
}