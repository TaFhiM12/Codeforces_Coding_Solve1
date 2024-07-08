#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool isPossible(const vector<int>& a, const vector<int>& b, const vector<int>& d) {
    int n = a.size();
    unordered_map<int, int> last_occurrence;

    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i]) {
            last_occurrence[b[i]] = i;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i] && last_occurrence[b[i]] != i) {
            return false;
        }
    }

    for (int i = 0; i < d.size(); ++i) {
        if (last_occurrence.find(d[i]) == last_occurrence.end()) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        cin >> m;
        vector<int> d(m);
        for (int i = 0; i < m; ++i) {
            cin >> d[i];
        }

        if (isPossible(a, b, d)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
