#include <iostream>
#include <vector>

int main() {
    std::vector<int> counts(10, 0);
    int num;
    while (std::cin >> num && num != 0) {
        counts[num]++;
    }
    for (int i = 1; i <= 9; ++i) {
        std::cout << counts[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}