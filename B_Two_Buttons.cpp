#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n,m; cin >> n >> m ;
    int ans = 0;
    if(n == m) ans = 0;
    while(n!=m){
        if (n > m) 
        {
            ans += (n - m);
            m = n;
        }
        else{
            if(m%2==1){
                m++;
                ans++;
            }
            else{
                m /= 2;
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}