#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int a , b ;
    cin >> a >> b ;
    int ans = 0 , cnt = 0 ;
    while(a){
        cnt++;
        if(cnt == b) {a++;cnt=0;}
        ans++;a--;
    }
    cout << ans << nl;
    return 0;
}