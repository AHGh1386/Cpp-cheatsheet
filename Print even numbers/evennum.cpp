#include <iostream>

int main() {
    int limit;

    std::cout << "Enter the limit: ";
    std::cin >> limit;

    std::cout << "Even numbers from 1 to " << limit << ":" << std::endl;
    for (int i = 2; i <= limit; i += 2) {
        std::cout << i << std::endl;
    }

    return 0;
}
