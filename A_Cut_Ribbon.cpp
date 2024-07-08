#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main(){
    optimize();
    int n, a, b, c, i, j, ans = 0;
    cin >> n >> a >> b >> c;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            int d = n - i * a - j * b;
            if (d >= 0 && d % c == 0)
            {
                ans = max(ans, i + j + d / c);
            }
        }
    }
    cout << ans << nl ;
}