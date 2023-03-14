#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_Item {
    string isbn;
    unsigned int units_sold = 0;
    double revenue = 0.0;
};

int
main()
{
    int i;
    cin >> i;
    std::cout << i << std::endl;

    cout << "Enter two numbers:" << std::endl;
    int v1, v2;
    cin >> v1 >> v2;
    cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;

    /**
     * Exercise 3.1
     * 1)
     */
    cout << "Enter two numbers: " << endl;
    int value1, value2;
    cin >> value1 >> value2;
    cout << "Range between " << value1 << " and " << value2 << endl;
    while (value1 <= value2) {
        cout << value1 << " ";
        ++value1;
    }
    cout << endl;

    /**
     * 2)
     */
    Sales_Item total;
    double temp_price = 0.0;
    if (cin >> total.isbn >> total.units_sold >> temp_price) {
        total.revenue = total.units_sold * temp_price;

        Sales_Item item;
        while (cin >> item.isbn >> item.units_sold >> temp_price) {
            item.revenue = item.units_sold * temp_price;

            if (item.isbn == total.isbn) {
                total.revenue += item.revenue;
                total.units_sold += item.units_sold;
            }
            else {
                cout << "ISBN: " << total.isbn << " Sold: " << total.units_sold << " Revenue: " << total.revenue
                     << " Average: " << total.revenue / total.units_sold << endl;
                total.isbn = item.isbn;
                total.units_sold = item.units_sold;
                total.revenue = item.revenue;
            }
        }
        cout << "ISBN: " << total.isbn << " Sold: " << total.units_sold << " Revenue: " << total.revenue
             << " Average: " << total.revenue / total.units_sold << endl;
    }

    return 0;
}
