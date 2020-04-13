//
//  main.cpp
//  2.3.1_3
//
//  Created by doog on 2017/5/26.
//
//

#include <iostream>

int main()
{
    int i, &ri = i;
    std::cout << i << "  " << ri << std::endl;
//    0  0
    i = 5; ri = 10;
    std::cout << i << "  " << ri << std::endl;
//    10  10
}
