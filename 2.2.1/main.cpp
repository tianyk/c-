//
//  main.cpp
//  2.2.1
//
//  Created by doog on 2017/5/26.
//
//

#include <iostream>

int main()
{
    long double ld = 3.1415926;
    int a{ld}, b = {ld}; // 列表初始化时编译报错 存在信息丢失的风险
    int c(ld), d = ld;
    std::cout << "a : " << a << " b: " << b << " c:" << c << " d:" << d << std::endl;
    
    return 0;
}
