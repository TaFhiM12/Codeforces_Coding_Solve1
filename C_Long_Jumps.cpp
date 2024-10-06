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
        int n;cin >> n;
        vector<int> v(n);
        for (int i=0; i<n; i++) cin >> v[i];
        int ans;
        for (int i=n - 1; i >= 0; i--){
            if (i+1+v[i]<=n) v[i] += v[i + v[i]];
            if (i==n - 1 || v[i]>ans) ans = v[i];
        }
        cout << ans << endl;
    }
    return 0;
}
