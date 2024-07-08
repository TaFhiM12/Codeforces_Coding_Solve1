#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

bool isNonDecreasing(const vector<int>& a) {
    int n = a.size();
    vector<int> b(n - 1);

    for (int i = 0; i < n - 1; ++i) {
        b[i] = gcd(a[i], a[i + 1]);
    }

    for (int i = 1; i < n - 1; ++i) {
        if (b[i] < b[i - 1])
            return false;
    }

    return true;
}

bool canRemoveOne(const vector<int>& a) {
    int n = a.size();
    vector<int> prefixes(n), suffixes(n);

    prefixes[0] = a[0];
    for (int i = 1; i < n; ++i) {
        prefixes[i] = gcd(prefixes[i - 1], a[i]);
    }

    suffixes[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        suffixes[i] = gcd(suffixes[i + 1], a[i]);
    }

    for (int i = 0; i < n; ++i) {
        int gcd_except_i;
        if (i == 0) {
            gcd_except_i = suffixes[1];
        } else if (i == n - 1) {
            gcd_except_i = prefixes[n - 2];
        } else {
            gcd_except_i = gcd(prefixes[i - 1], suffixes[i + 1]);
        }

        if (a[i] % gcd_except_i != 0) {
            return true;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (isNonDecreasing(a) || canRemoveOne(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
