#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int32_t main() {
    optimize();
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (is_sorted(a.begin(), a.end())) {
        cout << "yes" << nl << "1 1" << nl;
        return 0;
    }

    int left = 0, right = n - 1;

    while (left < n - 1 && a[left] < a[left + 1]) {
        left++;
    }

    while (right > 0 && a[right] > a[right - 1]) {
        right--;
    }

    reverse(a.begin() + left, a.begin() + right + 1);
    if (is_sorted(a.begin(), a.end())) {
        cout << "yes" << nl << left + 1 << " " << right + 1 << nl;
    } else {
        cout << "no" << nl;
    }

    return 0;
}
