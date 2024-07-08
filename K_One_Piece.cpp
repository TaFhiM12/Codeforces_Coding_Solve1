#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main()
{
    string str;
    cin >> str;
    vector<int> v;
    int n = 1, mx = 0, k = -1, l;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(') v.push_back(i);
        else if (v.size() > 0)
        {
            if (v.size() == 1) l = i - k;
            else l = i - v[v.size() - 2];
            if (l > mx) mx = l, n = 1;
            else if (l == mx) n++;
            v.pop_back();
        }
        else k = i;
    }
    cout << mx << " " << n << endl;
    return 0;
}