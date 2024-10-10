#include <iostream>

int main() {
    long long result{0};

    std::string line;
    char first{'0'}, last{'0'};
    while (std::cin >> line) {
        for (auto ch : line) {
            if (isdigit(ch)) {
                first = ch;
                break;
            }
        }

        for (auto it = line.rbegin(); it != line.rend(); it++) {
            if (isdigit(*it)) {
                last = *it;
                break;
            }
        }

        result += (first - '0') * 10 + (last - '0');
    }

    std::cout << result << std::endl;
}
