#include <bits/stdc++.h>
using namespace std;
int n;
string str;
int main() {
    cin >> n >> str;
    map<char, int> hsh;
    for (auto ele : str) hsh[ele] = 1;
    if (hsh.size() < n) cout << "NO" << '\n';
    else {
        cout << "YES" << '\n';
        string ans = "";
        for (auto ele : str) {
           if (hsh[ele] == 1) {
                if (ans.size() >= 1 and n > 1) {
                    cout << ans << '\n';
                    ans = "";
                    n -= 1;
                }
                hsh[ele] = 0;
           }
           ans += ele;
        }
        if (!ans.empty()) cout << ans << '\n';
    }
    return 0;
}