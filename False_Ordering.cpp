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
    vector<pair<int, int>> v;
    int lim = 1e3;
    vector<int> vec(lim);
    for (int i = 1; i <=lim; i++)
    {
        for (int j = i; j <= lim; j += i)
        {
            vec[j]++;
        }
    }
    for (int i = 1; i <= lim; i++)
    {
        v.push_back({vec[i], -i});
    }
    sort(v.begin(), v.end());
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        cout << "Case " << i << ": " << v[n - 1].second * -1 << nl;
    }
    return 0;
}