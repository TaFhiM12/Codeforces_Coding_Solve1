#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cctype>

using namespace std;

string getPosition(int row, int col) {
    char column = 'a' + col / 4;
    char rank = '8' - row / 2;
    return string(1, column) + rank;
}

int main() {
    vector<string> board;
    string line;

    // Read the whole board input
    while (getline(cin, line)) {
        if (line.empty()) break;
        board.push_back(line);
    }

    map<char, vector<string>> whitePieces, blackPieces;

    // Parse the board and collect positions
    for (int row = 1; row <= 15; row += 2) {
        for (int col = 2; col <= 31; col += 4) {
            char piece = board[row][col];
            if (isalpha(piece)) {
                string position = getPosition(row, col);
                if (isupper(piece)) {
                    whitePieces[piece].push_back(position);
                } else {
                    blackPieces[piece].push_back(position);
                }
            }
        }
    }

    auto formatAndSort = [](map<char, vector<string>> &pieces, bool white) -> string {
        string result;
        string order = "KQRBNP";
        for (char p : order) {
            char piece = white ? p : tolower(p);
            if (pieces.count(piece)) {
                auto &vec = pieces[piece];
                sort(vec.begin(), vec.end());
                if (!white) {
                    reverse(vec.begin(), vec.end());
                }
                for (const auto &pos : vec) {
                    if (!result.empty()) {
                        result += ",";
                    }
                    if (p != 'P') {
                        result += p;
                    }
                    result += pos;
                }
            }
        }
        return result;
    };

    // Format the output
    string whiteOutput = formatAndSort(whitePieces, true);
    string blackOutput = formatAndSort(blackPieces, false);

    cout << "White: " << whiteOutput << endl;
    cout << "Black: " << blackOutput << endl;

    return 0;
}
