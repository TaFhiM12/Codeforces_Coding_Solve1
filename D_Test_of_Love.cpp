#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);
int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--) {
        int n, m, k; cin >> n >> m >> k;
        string s;cin >> s;
        s += 'L';
        int pre = -1, p = -1;
        bool f = true;
        for (int i = 0; i <= n; i++) {
            if (s[i] == 'L') {
                pre = p;
                p = i;
                if (p - pre > m) {
                    int j = p - 1 , cnt = 0;
                    int temp = (p - pre) - m;
                    while (s[j] == 'W') {
                        cnt++,j--;
                        // cout << cnt << " "<< j << nl;
                        if (cnt == temp) break;  
                    }
                    if (cnt == temp) k -= temp;
                    else f = false;
                }
            }
            if (k < 0) f = false;
        }
        cout << (f == true ? "YES" : "NO") << nl ;
    }
    return 0;
}
