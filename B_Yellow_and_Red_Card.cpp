#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

int32_t main()
{
    int n, q;
    cin >> n >> q;
    vector<int> c(n, 0);
    for (int i = 0; i < q; i++)
    {
        int t, x;
        cin >> t >> x;
        x--;
        if (t == 1) c[x]++;
        if (t == 2) c[x] += 2;
        if (t == 3)
        {
            if (c[x] >= 2) cout << "Yes" << endl;
            else cout << "No" << endl; 
        }
    }
}