#pragma once

#include <string>

struct Sales_Item {
    std::string isbn;
    unsigned int units_sold = 0;
    double revenue = 0.0;
};
