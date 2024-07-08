#include<bits/stdc++.h>
#define int long long
using namespace std;
#ifndef ONLINE_JUDGE
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define dbg(x)
#endif
class solution {
private:
    int N, a[8005];

public:
    void solve() {
        cin >> N;
        for (int i = 0; i < N; i++)
            cin >> a[i];
        int big = *max_element(a, a + N);

        unordered_map<int, int> mval, sumval;
        for (int i = 0; i < N ; i++)
        {
            mval[a[i]]++;
            int sum = a[i];
            for (int j = i ; j < N; j++)
            {
                sum += a[j];
                if (sum > big)
                    break;
                sumval[sum] = 1;
            }
        }
        int ans = 0;

        for (int i = 0; i < N; i++)
        {
            ans += (sumval[a[i]] != 0);
        }
        cout << ans << '\n';
    }
};
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);
    int tc;
    cin >> tc;
    solution obj;
    for (int i = 1; i <= tc; i++) {
        // cout << "Case " << i << ": ";
        obj.solve();
    }
    return 0;
}