#include <iostream>

#include "vendor/sales_item.h"

int main() {
    // Exercise 1.25

    Sales_Item total;
    if (std::cin >> total) {
        Sales_Item transaction;
        while (std::cin >> transaction) {
            if (transaction.isbn() == total.isbn()) {
                total += transaction;
            }
            else {
                std::cout << total << std::endl;
                total = transaction;
            }
        }
        std::cout << total << std::endl;
    }
    else {
        std::cerr << "Failed to read first entry!" << std::endl;
        return -1;
    }

    return 0;
}
