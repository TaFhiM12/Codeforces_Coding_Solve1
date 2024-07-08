#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long

int32_t main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    vector<bool> c1(n + 1, 0);
    vector<int> c2;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        if (!c1[i]) c1[a[i]] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        if (!c1[i]) c2.push_back(i);
    }
    cout << c2.size() << nl;
    for (int id : c2) cout << id << " ";
    cout << nl ;
    return 0;
}