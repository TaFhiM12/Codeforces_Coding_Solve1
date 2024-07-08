#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int t = 1 ; 
    while(t--){
        int n, k;
        cin >> n >> k;
        int ans = 1;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int  a; cin >> a;
            if(sum + a > k) {
                ans += 1;
                sum = 0;
            }
            sum += a;
        }
        cout << ans << '\n';
    }
    return 0;
}