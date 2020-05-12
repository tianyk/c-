//
//  main.cpp
//  c++
//
//  Created by doog on 2017/5/24.
//  Copyright © 2017年 doog. All rights reserved.
//

#include <iostream>

int main()
{
    //    << 输出运算符 左侧必须是一个ostream对象。输出运算符的返回值是其左侧对象，即ostream对象。a << b 返回值是 a。
    //    >> 输入运算符 和输出运算符类似，只是其左侧接受一个istream对象
    
//    先出输入 (std::cout << "Enter tow numbers: ") << std::endl
    std::cout << "Enter tow numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}
