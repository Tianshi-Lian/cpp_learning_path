#include <iostream>
#include <string>

int
main()
{

    // ! 2.6.1
    {
        struct new_class {
            std::string text;
            int value = 0;
            double fraction = 0.0;
        };
    }

    // Exercise 2.39
    // struct Foo { /* empty */ } // Note: no semicolon

    // Exercise 2.40
    {
        struct Sales_Item {
            std::string isbn;
            unsigned int units_sold = 0;
            double revenue = 0.0;
        };
    }

    // ! 2.6.2
    {
        struct new_class {
            std::string text;
            int value = 0;
            double fraction = 0.0;
        };

        new_class foo;
        std::cin >> foo.text >> foo.value >> foo.fraction;
    }

    // Exercise 2.41
    {
        struct Sales_Item {
            std::string isbn;
            unsigned int units_sold = 0;
            double revenue = 0.0;
        };

        Sales_Item item_1;
        Sales_Item item_2;

        double temp_price = 0.0;
        std::cin >> item_1.isbn >> item_1.units_sold >> temp_price;
        item_1.revenue = temp_price * item_1.units_sold;

        std::cin >> item_2.isbn >> item_2.units_sold >> temp_price;
        item_2.revenue = temp_price * item_2.units_sold;
        if (item_2.isbn == item_1.isbn) {
            std::cout << "ISBN: " << item_1.isbn << " Sold: " << item_1.units_sold + item_2.units_sold
                      << " Revenue: " << item_1.revenue + item_2.revenue << std::endl;
        }

        Sales_Item total;
        if (std::cin >> total.isbn >> total.units_sold >> temp_price) {
            total.revenue = total.units_sold * temp_price;

            Sales_Item item;
            while (std::cin >> item.isbn >> item.units_sold >> temp_price) {
                item.revenue = total.units_sold * temp_price;

                if (item.isbn == total.isbn) {
                    total.revenue += item.revenue;
                    total.units_sold += item.units_sold;
                }
                else {
                    std::cout << "ISBN: " << total.isbn << " Sold: " << total.units_sold << " Revenue: " << total.revenue
                              << std::endl;

                    total.isbn = item.isbn;
                    total.units_sold = item.units_sold;
                    total.revenue = item.revenue;
                }
            }

            std::cout << "ISBN: " << total.isbn << " Sold: " << total.units_sold << " Revenue: " << total.revenue << std::endl;
        }
    }
    std::cout << std::endl << std::endl;

    // ! 2.6.3
    // Exercise 2.42
    {
#include "sales_item.h"

        // literally a copy and paste of L#47-L#83.
    }

    return 0;
}
