#include <bits/stdc++.h>
#define eb emplace_back
#define nl "\n"
using namespace std;
typedef vector<int> vi;
#define int long long
#define YES cout << "YES" << nl
#define NO cout << "NO" << nl
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

char g[1000][1000];

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y;
        int ans = 0 ;
        cin >> n >> m >> x >> y;
        // char g[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> g[i][j];
        }
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //         cout << g[i][j] <<" ";
        //         cout << nl;
        // }

        if (2*x <= y)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if(g[i][j] == '*') continue;
                    if(g[i][j] == '.') ans+=x;
                }
            }
        }
        else {
            
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if(g[i][j] == '*') continue;
                    if(g[i][j] == '.' && g[i][j+1] == '.' && m>1) {
                        ans += y ;
                        j++;
                    }
                    else ans += x ;
                }
            }

        }
        cout << ans << nl;
    }
    return 0;
}