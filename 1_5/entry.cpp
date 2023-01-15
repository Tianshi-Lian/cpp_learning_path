#include <iostream>

#include "sales_item.h"

int main() {
    // This used a fixed number of reads to allow us to run all the code here in one go.
    // If we used a `while` like the book we could only run one exercise at a time due
    // to the fact it would read until the end of our input file on the first run.

    // ! 1.5.1

    // Exercise 1.20
    // See sales_item.h
    Sales_Item book;
    for (int i = 0; i < 3; ++i) {
        std::cin >> book;
        std::cout << book << std::endl;
    }

    std::cout << std::endl << std::endl;

    // Exercise 1.21
    Sales_Item item_1, item_2;
    std::cin >> item_1 >> item_2;
    std::cout << item_1 + item_2 << std::endl;

    std::cout << std::endl << std::endl;

    // Exercise 1.22
    Sales_Item input, total;
    for (int i = 0; i < 3; ++i) {
        std::cin >> input;
        total += input;
    }
    std::cout << "Total sales: " << total << std::endl;

    std::cout << std::endl << std::endl;

    // ! 1.5.2

    // Exercise 1.23 && 1.24
    Sales_Item current;
    if (std::cin >> current) {
        int transactions = 1;
        for (int i = 1; i <= 10; ++i) {
            Sales_Item new_book;
            std::cin >> new_book;
            if (new_book.isbn() == current.isbn()) {
                ++transactions;
            }
            else {
                std::cout << "Transactions: " << transactions << std::endl;
                transactions = 1;
                current = new_book;
            }
        }
    }

    return 0;
}
