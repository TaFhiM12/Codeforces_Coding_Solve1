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
    int i, j, k, n, m, c, t, x, y;
    cin >> n >> m;
    x = m;
    if (n == 1 && m == 0)
    {
        cout << "0 0";
        return 0;
    }
    int a[n + 3];
    for (i = 1; i < n; i++)
        a[i] = 0;
    if (m > 9 * n || !m)
    {
        cout << "-1 -1";
        return 0;
    }
    a[0] = 1;
    m--;
    for (i = n - 1; i >= 0; i--)
    {
        k = (i == 0 ? 8 : 9);
        c = min(k, m);
        m -= c;
        a[i] += c;
    }
    for (i = 0; i < n; i++)
        cout << a[i];
    cout << " ";
    for (i = 0; i < n; i++)
    {
        c = min(9LL, x);
        x -= c;
        cout << c;
    }
}
