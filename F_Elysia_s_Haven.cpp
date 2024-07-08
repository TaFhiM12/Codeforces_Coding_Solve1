#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main() {
    optimize();
    int n;
    cin >> n;
    double ans = 1.0; 
    double ftrl = 1.0;
    for (int i = 1; i <= n; ++i) {
        ftrl *= i;
        ans += 1.0 / ftrl;
    }
    fraction(15);
    cout << ans << endl;
    return 0;
}
