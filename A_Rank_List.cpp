#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}

int32_t main()
{
    optimize();
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v(n);
    map<int, map<int, int>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        mp[v[i].first][v[i].second] ++;
    }
    sort(v.begin(), v.end(), sortbysec);

    // int i=1;
    // for(auto u : v ) cout << u.first << " "<<u.second << " " << i++ <<nl;
    // cout <<"***********" << v[k-1].first << nl;
    // cout << count(v.begin(),v.end(),v[k-1].first)  << nl;
    cout << mp[v[k-1].first][v[k-1].second] << nl;

    return 0;
}