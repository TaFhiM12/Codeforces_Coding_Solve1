#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main() {
    int t;
    cin >> t;

    while(t--) {
        int p, l;
        cin >> p >> l;
        int d = p - l;
        vector<int> r;

        for (int i = 1; i * i <= d; ++i) {
            if (d % i == 0) {
                if (i > l) r.push_back(i);
                if (i != d / i && d / i > l) r.push_back(d / i);
            }
        }
        sort(r.begin(), r.end());
        cout << "Case " << t << ": ";
        if (r.empty()) cout << "impossible";
        else {
            for (size_t i = 0; i < r.size(); ++i) {
                if (i > 0) cout << " ";
                cout << r[i];
            }
        }
        cout << nl ;
    }

    return 0;
}
