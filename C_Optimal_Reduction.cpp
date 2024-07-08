#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n ; cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++) cin >> a[i];
        int p = 1;
        while (p < n && a[p] <= a[p + 1]) p++;
        int s = 1;
        while (s < n && a[n - s] >= a[n - s + 1]) s++;
        if (p + s >= n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}