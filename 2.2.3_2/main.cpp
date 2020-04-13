//
//  main.cpp
//  2.2.3_2
//
//  Created by doog on 2017/5/26.
//
//

#include <iostream>

int main()
{
    int i = 100, sum = 0;
//    for 循环内的i作用域在for循环内，和外部的i不是同一个。
    for (int i = 0; i != 10; ++i)
        sum += i;
    
    std::cout << i << "  " << sum << std::endl;
}
