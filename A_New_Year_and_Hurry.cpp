#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

int32_t main()
{
    int p, w ;
    cin >> p >> w;
    int ans = w ;
    for (int i = 1; i <= p; i++)
    {
        ans += (i * 5);
        if (240-ans <= 0)
        {
            if (240 - ans < 0)
            {
                cout << i - 1 << nl;
                return 0;
            }
            else
            {
                cout << i << nl;
                return 0;
            }
        }
    }
    cout << p << nl;
    return 0;
}