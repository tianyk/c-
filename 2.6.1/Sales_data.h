//
//  Sales_data.h
//  c++
//
//  Created by doog on 2017/5/31.
//
//
#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif
