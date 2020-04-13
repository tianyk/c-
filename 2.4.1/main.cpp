//
//  main.cpp
//  2.4.1
//
//  Created by doog on 2017/5/27.
//
//

#include <iostream>

// const和引用
// 对一个常量对象的引用也应该是一个常量引用
int main()
{
    const int ci = 1024;
    const int &rri = ci;
    
    int i = 42;
    const int &r1 = i; // 允许将const int& 绑定到一个普通int对象上。
    const int &r2 = 42; // 正确r2是一个常量引用
    const int &r3 = r1 * 2; // 正确，r3是一个常量引用
//    int &r4 = r1 * 2; // 错误，r4是一个普通的非常量引用
    
    return 0;
    
}
