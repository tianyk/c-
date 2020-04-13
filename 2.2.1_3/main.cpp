//
//  main.cpp
//  2.2.1_3
//
//  Created by doog on 2017/5/26.
//
//

#include <iostream>

int main()
{
//    std::cin >> int input; // 编译错误
//    int i = {3.14}; // 编译错误 使用列表初始化时，如果存在丢失信息的风险编译器会报错。
//    double salary = wage = 9999.99; // 编译报错 需要先声明wage;
    int i = 3.14; // 编译通过 精度丢失
    std::cout << i << '\n';
    
    return 0;
}
