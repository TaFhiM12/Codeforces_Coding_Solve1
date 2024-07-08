#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

void solve() {
    int n;
    string b;
    cin >> n >> b;

    set<char> distinct_chars(b.begin(), b.end());
    string r(distinct_chars.begin(), distinct_chars.end());
    cout << "R : " << r << nl ;

    unordered_map<char, char> encode_map;
    int m = r.size();
    for (int i = 0; i < m; ++i) {
        encode_map[r[i]] = r[m - 1 - i];
    }

    string s = b;
    for (int i = 0; i < n; ++i) {
        s[i] = encode_map[b[i]];
    }
    cout << s << nl;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
