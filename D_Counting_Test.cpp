#include<bits/stdc++.h>
using namespace std ;
#define nl endl;
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

unordered_map<int, map<char, int>> mp;
int n, q;
string s;

int solve(int k, char ch) {
    if (k < 0) return 0;
    int f = k / n;
    int r = k % n;
    int res = f * mp[n - 1][ch];
    if (r != 0) res += mp[r - 1][ch];
    return res;
}

int32_t main() {
    int t;
    cin >> t;
    while (t-- != 0) {
        scanf("%d %d", &n,&q);
        scanf("%s", s);
        mp.clear();
        mp[0][s[0]]++;
        for (int i = 1; i < n; ++i) {
            mp[i] = mp[i - 1]; 
            mp[i][s[i]]++;
        }
        // for(int i=0 ;i<n ;i++) {
        //     cout << mp[i][s[i]] << nl ;
        // }
        int l, r;
        char c;
        while (q--) {
            scanf("%d%d%c", &l, &r, &c);
            printf("%d\n", (solve(r,c) - solve(l-1,c)));
        }
    }
    return 0;
}
