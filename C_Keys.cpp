#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main() {

    int N, M, K;
    cin >> N >> M >> K;
    vector<vector<int>> t(M);
    vector<char> res(M);
    for (int i = 0; i < M; ++i) {
        int c; cin >> c;
        for (int j = 0; j < c; ++j) {
            int a; cin >> a;
            t[i].push_back(a-1); 
        }
        cin >> res[i];
    }

    int ans = 0;
    for (int j = 0; j < (1 << N); ++j) {
        bool v = true;
        for (int i = 0; i < M && v; ++i) {
            int cnt = 0;
            for (int key : t[i]) {
                if (j & (1 << key)) cnt++;
            }
            if (res[i] == 'o' && cnt < K) v = false;
            if (res[i] == 'x' && cnt >= K) v = false;
        }
        if (v) ans++;
    }

    cout << ans << endl;
    return 0;
}
