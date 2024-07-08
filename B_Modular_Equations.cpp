#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main() {
    optimize();
    int a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "infinity" << endl;
        return 0;
    }
    int d = a - b;
    if (d < 0) {
        cout << 0 << endl;
        return 0;
    }
    int cnt = 0;
    for (int i = 1; i * i <= d; i++) {
        if (d % i == 0) {
            if (i > b) cnt++;
            if (i != d / i && d / i > b) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
