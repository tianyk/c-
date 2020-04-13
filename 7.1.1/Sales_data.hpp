//
//  Sales_data.hpp
//  c++
//
//  Created by doog on 2017/6/26.
//
//

#ifndef Sales_data_hpp
#define Sales_data_hpp

#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    std::string isbn() const {
        return bookNo;
    }

    Sales_data& combine(const Sales_data&);

    double avg_price() const;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

#endif /* Sales_data_hpp */
