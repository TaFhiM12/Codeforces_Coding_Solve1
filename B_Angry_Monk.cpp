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
    int t;
    cin >> t;
    while (t--)
    {
        int k, n, sum = 0;
        cin >> k >> n;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++)
        {
            int a; cin >> a;
            if (a == 1) sum++;
            else pq.push(a);
        }
        if (!pq.empty())
        {
            while (pq.size() > 1)
            {
                int current = pq.top();
                pq.pop();
                sum += (current * 2) - 1;
            }
        }
        else sum--;
        cout << sum << nl;
    }
    return 0;
}
