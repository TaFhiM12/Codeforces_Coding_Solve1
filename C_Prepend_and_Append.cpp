#include<bits/stdc++.h>
using namespace std;
int solve(const std::vector<int>& nums) {
    int n = nums.size();
    int res = 1;  
    while (res <= n) {
        unordered_set<int> uniqueORs;
        bool selection = true;
        for (int i = 0; i <= n - res; ++i) {
            int Or_per = nums[i];
            for (int j = i + 1; j < i + res; ++j) {
                Or_per |= nums[j];
            }
            if (!uniqueORs.empty() && uniqueORs.find(Or_per) == uniqueORs.end()) {
                selection = false;
                break;
            }
            uniqueORs.insert(Or_per);
        }
        if (selection) {
            return res;
        }
        ++res;
    }
    return n;  
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        vector<int> v(x);
        for (int i = 0; i < x; i++) {
            cin >> v[i];
        }
        cout << solve(v) << endl;
    }
}