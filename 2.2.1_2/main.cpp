//
//  main.cpp
//  2.2.1_2
//
//  Created by doog on 2017/5/26.
//
//

#include <iostream>

// 默认初始化
int main()
{
    int a; // 0
    unsigned b; // 0
    long c; // 0
    float fd;
    double d; // 0
    bool e; // 0 false
    char f; // \0 空字符
    
    long long g; // 4295001280
    long double ld; // -6.99851e-4547

    std::cout << "a: " << a << " b:" << b << " c:" << c << " d: " << d
    << " fd: " << fd << " e:" << e << " f:" << f << " g:" << g
    << " ld:" << ld << std::endl;
    
    return 0;
}
