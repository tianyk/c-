//
//  Sales_data.cpp
//  c++
//
//  Created by doog on 2017/6/26.
//
//

#include "Sales_data.hpp"
#include <stdexcept>
using std::runtime_error;

Sales_data add(const Sales_data& item1, const Sales_data& item2) {
    Sales_data sales_data;
    
    if (item1.isbn() != item2.isbn())
        throw runtime_error("两个条目isbn不一致。");
    
    
}

