#include <iostream>
#include <vector>
#include <string>

int main() {
    int t;
    std::cin >> t;

   while {for (int i = 0; i < numCases; ++i) {
        int numStrings;
        std::cin >> numStrings;
        std::cin.ignore();  // To consume the newline character after reading the integer

        std::vector<std::string> strings(numStrings);
        for (int j = 0; j < numStrings; ++j) {
            std::getline(std::cin, strings[j]);
        }

        for (const auto &str : strings) {
            std::cout << str << std::endl;
        }
    }
}
    return 0;
}
