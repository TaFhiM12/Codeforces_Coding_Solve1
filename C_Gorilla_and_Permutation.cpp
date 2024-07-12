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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> p(n);
        sort(p.begin(), p.end(), greater<int>());
        reverse(p.begin() + (m - 1), p.begin() + k);
        // for (int i = 0; i < n; ++i) cout << p[i] << " ";
        for (int i = n; i >= m+1; i--) cout << i << " ";
        for (int i = 1; i <= m; i++) cout << i << " ";
        cout << nl ;
    }
    return 0;
}