#include <bits/stdc++.h>
using namespace std;
int N, a[100005], tc;
string str;
void solve () {
    cin >> N;
    queue<int> happy, cap;
    for (int i = 1; i <= N; i++) {
        cin >> a[i];
        cap.push(a[i]);
    }
    cin >> str;
    str = '0' + str;
    for (int i = 1; i <= str.size(); i++) {
        if (str[i] == '1') {
            happy.push(i);
        }
    }
    while(happy.size() < N) {
        happy.push(0);
    }
    for (int i = 1; i <= N; i++) {
        if(str[i] == '0') {
            if(cap.front() == i) {
                continue;
            } else if(cap.front() != happy.front()){
                cap.pop();
            }
        }
        else if (str[i] == '1') {
            if(cap.front() == i) {
                cap.pop();
                happy.pop();
            } else if (cap.front() != i) {
                cout << "NO" << '\n';
                return;
            }
        }
    }
    cout << "YES" << endl;
}
int main() {
    cin >> tc;

    while (tc --) {
        solve();
    }
    return 0;
}