#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {
    int a, b;
    cin >> a >> b;

    int ans = b / 2;
    a -= (ans * 7);

    if (b % 2 != 0) {
        ans++;
        a -= 11;
    }

    if (a > 0) {
        ans += (a + 14) / 15;
    }

    cout << ans << nl;
}

int32_t main() {
    optimize();

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}
