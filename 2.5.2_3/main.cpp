//
//  main.cpp
//  2.5.2_3
//
//  Created by doog on 2017/5/31.
//
//

#include <iostream>

int main()
{
//    P 62 练习2.33
//    a = 42; b = 42; c = 42;
//    d = 42; e = 42; g = 42;
    
    const int i = 42;
    auto j = i; // j 是一个整型 顶层const被忽略
    j = 12;
    
    const auto &k = i; // k 是一个整型常量引用 const int &k = i; 前面的const不是必须的 ***将引用设置为auto时，被引用对象原来的规则仍然适用***
    
    auto *p = &i; // p 是一个 const int *p = &i;
    
    const auto j2 = i, &k2 = i; // 
    return 0;
}
