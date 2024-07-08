#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    optimize();
    int n, m, c, mc;
    cin >> n >> m >> c >> mc;
    int a = c * n;
    int b = (ceil(1.0 * n / m)) * mc;
    int d = (n / m) * mc + (n % m) * c;
    cout << min(a, min(b, d)) << endl;
    return 0;
}