#include <iostream>
#include <vector>
#include <algorithm>

// Functor for comparing pairs based on the sum of their elements
class PairSumComparator {
    // TODO: Overload the () operator to compare two pairs
    // The comparator should first compare the sum of the elements of the pairs
    // If the sums are equal, then compare the first elements of the pairs
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

        // TODO: Use the PairSumComparator functor to sort 'testCases[i]'
        // std::sort(testCases[i].begin(), testCases[i].end(), PairSumComparator());

        std::cout << "Sorted:   ";
        printVector(testCases[i]);
        std::cout << std::endl;
    }

    return 0;
}
