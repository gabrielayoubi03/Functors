#include <iostream>
#include <vector>
#include <algorithm>

// Functor for comparing pairs based on the sum of their elements
class PairSumComparator {
public:
    bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) const {
        int sumA = a.first + a.second;
        int sumB = b.first + b.second;
        if (sumA == sumB) {
            return a.first < b.first;
        }
        return sumA < sumB;
    }
};

void printVector(const std::vector<std::pair<int, int>>& vec) {
    for (const auto& pair : vec) {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<std::vector<std::pair<int, int>>> testCases = {
        {}, // Empty vector
        {{5, 5}}, // Single pair
        {{2, 3}, {3, 2}}, // Pairs with the same sum
        {{-1, -2}, {-3, -4}, {-2, -2}, {-3, -3}} // Negative integers
    };

    for (size_t i = 0; i < testCases.size(); ++i) {
        std::cout << "Test Case " << i + 1 << ": " << std::endl;
        std::cout << "Original: ";
        printVector(testCases[i]);

        std::sort(testCases[i].begin(), testCases[i].end(), PairSumComparator());

        std::cout << "Sorted:   ";
        printVector(testCases[i]);
        std::cout << std::endl;
    }

    return 0;
}
