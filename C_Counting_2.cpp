#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main(){
    optimize();
    int n, x;
    cin >> n >> x;
    vector<int> h(n), q(x);
    for(int i = 0; i < n; i++) cin >> h[i];
    sort(h.begin(), h.end());
    for(int i = 0; i < x; i++) cin >> q[i];
    for(int j = 0; j < x; j++){
        int cnt = h.end() - lower_bound(h.begin(), h.end(), q[j]);
        cout << cnt << nl;
    }
    return 0;
}
