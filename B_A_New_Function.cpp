#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long SOD(int n) {
    long long sum = 0;
    long long sz = sqrtl(n);
    for (int i = 2; i<= sz ; ++i) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum;
}

long long CSOD(int n) {
    long long result = 0;
    for (int i = 1; i <= n; ++i) {
        result += SOD(i);
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    
    vector<int> cases(t);
    for (int i = 0; i < t; ++i) {
        cin >> cases[i];
    }

    for (int i = 0; i < t; ++i) {
        cout << "Case " << i + 1 << ": " << CSOD(cases[i]) << endl;
    }

    return 0;
}
