#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

const int mx = 1e7 + 123 ;
int cnt[mx] ;

int32_t main()
{
    optimize();

    //Number of Divisors from 1 to mx ......
    // precontribution technic....
    //complexity O(nln(n))...
    
    for(int i=1 ;i<=mx ;i++){
        for(int j=i ; j<=mx ; j += i){
            cnt[j]++;
        }
    }

    int n ; 
    cin >> n ;
    int ans = 0 ;
    for(int i=1 ;i<=n ;i++){
        ans += (i*cnt[i]);
    }

    cout << ans << nl ;
    return 0;
}