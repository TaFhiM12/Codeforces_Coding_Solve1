#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool is_sorted(const vector<long long>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<long long> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; ++i) {
        string original = to_string(numbers[i]);
        string modified = original;

        for (int j = 0; j < original.size(); ++j) {
            char original_digit = original[j];

            for (char new_digit = '0'; new_digit <= '9'; ++new_digit) {
                if (new_digit == original_digit) continue;
                
                modified[j] = new_digit;
                if (modified[0] != '0' || (modified[0] == '0' && modified.size() == 1)) {
                    long long new_value = stoll(modified);
                    numbers[i] = new_value;

                    if (!is_sorted(numbers)) {
                        for (const auto& num : numbers) {
                            cout << num << " ";
                        }
                        cout << endl;
                        return 0;
                    }
                }
            }
            modified[j] = original_digit;
        }
        numbers[i] = stoll(original);
    }

    cout << "impossible" << endl;
    return 0;
}
