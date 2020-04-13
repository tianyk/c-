//
//  main.cpp
//  1.6
//
//  Created by doog on 2017/5/25.
//
//

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currItem, valItem;
    if (std::cin >> currItem) {
        while(std::cin >> valItem) {
            if (currItem.isbn() == valItem.isbn()) {
                currItem += valItem;
            } else {
                std::cout << currItem << std::endl;
                currItem = valItem;
            }
        }
        std::cout << currItem << std::endl;
    }
}
