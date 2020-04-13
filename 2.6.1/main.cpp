//
//  main.cpp
//  2.6.1
//
//  Created by doog on 2017/5/31.
//
//

#include <iostream>
#include "Sales_data.h"

// 自定义数据结构

//struct Sales_data {
//    std::string bookNo;
//    unsigned units_sold = 0;
//    double revenue = 0.0;
//};

int main()
{
    Sales_data data1, data2;
    double price = 0;
    
    std::cout << "请输入第一条数据" << std::endl;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    
    std::cout << "请输入第二条数据" << std::endl;
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;
    
    if (data1.bookNo == data2.bookNo) {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        
        std::cout << data1.bookNo << "  " << totalCnt << "  " << totalRevenue << "  ";
        
        if (totalCnt != 0) {
            std::cout << totalRevenue / totalCnt << std::endl;
        } else {
            std::cout << "(no sales)" << std::endl;
        }
        return 0;
    } else {
        std::cerr << "Data must refer to the same ISBN" << std::endl;
        return -1;
    }
}
