#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main() {
    optimize();
    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;
        vector<pair<int, int>> points(n);
        for (auto &i : points)  cin >> i.first >> i.second;
        int ans = 1; 
        for (int i = 0; i < n; ++i) {
            map<pair<int, int>, int> spCnt;
            int dpnt = 0;
            int lcmax = 0;
            for (int j = 0; j < n; ++j) {
                if (i == j) continue;
                int dx = points[j].first - points[i].first , 
                    dy = points[j].second - points[i].second;
                if (dx == 0 && dy == 0) dpnt++;
                else {
                    int g = gcd(dx, dy);
                    dx /= g;
                    dy /= g;
                    if (dx < 0) {
                        dx = -dx;
                        dy = -dy;
                    } else if (dx == 0) dy = abs(dy);
                    spCnt[make_pair(dx, dy)]++;
                    lcmax = max(lcmax, spCnt[make_pair(dx, dy)]);
                }
            }
            ans = max(ans, lcmax + 1);
        }
        cout << ans << endl;
    }
    return 0;
}
