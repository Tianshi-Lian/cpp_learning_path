#include <iostream>

#include "sales_item.h"

int main() {
    // * Only run one exercise at a time.

    // Exercise 1.20
    // See sales_item.h
    Sales_Item book;
    while (std::cin >> book) {
        std::cout << book << std::endl;;
    }

    // Exercise 1.21
    Sales_Item item_1, item_2;
    std::cin >> item_1 >> item_2;
    std::cout << item_1 + item_2 << std::endl;

    // Exercise 1.22
    Sales_Item input, total;
    while (std::cin >> input) {
        total += input;
    }
    std::cout << "Total sales: " << total << std::endl;

    return 0;
}
