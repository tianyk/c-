//
//  main.cpp
//  2.1
//
//  Created by doog on 2017/5/25.
//
//

#include <iostream>

int main()
{
    int i = 3.5;
    std::cout << "i: " << i << std::endl;
    
    // 把有符号数赋值给无符号 ？？？
    unsigned int u = 10;
    i = -42;
    std::cout << i + i << std::endl;
    std::cout << u + i << std::endl;
    std::cout << i + u << std::endl;
    
    unsigned k = i;
    std::cout << k << std::endl;
    
    unsigned k1 = 1;
    int k2 = 2;
    std::cout << "k1 + k2 = " << k1 + k2 << std::endl;
    
    // 无符号的减法
    unsigned u1 = 42, u2 = 10;
    std::cout << u1 - u2 << std::endl;
//    1000 0000 0000 0000 0000 0000 0010 0000
//    0111 1111 1111 1111 1111 1111 1101 1111
//    0111 1111 1111 1111 1111 1111 1110 0000
    std::cout << u2 - u1 << std::endl;
    unsigned u3 = -32;
    std::cout << " (-32: " << u3 << ")" << std::endl;

}
