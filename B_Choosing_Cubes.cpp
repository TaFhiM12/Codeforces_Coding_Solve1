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
    int t;
    cin >> t;
    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        int fvrt = a[f-1];

        sort(a.rbegin(), a.rend());

        bool rmv = false , nrvm = false;

        for (int i = 0; i < k; ++i)
        {
            if (a[i] == fvrt)
                rmv = true;
        }

        for (int i = k; i < n; ++i)
        {
            if (a[i] == fvrt) nrvm = true;
        }

        if (rmv && nrvm) cout << "MAYBE" << nl;
        else if (rmv) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
    return 0;
}
