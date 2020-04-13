//
//  main.cpp
//  2.5.3
//
//  Created by doog on 2017/5/31.
//
//

#include <iostream>

int main()
{
    const int ci = 0, &cj = ci;
    
    decltype(ci) x = 0;
    decltype(cj) y = x; // const int &y = x; y绑定到变量x
//    decltype(cj) z; // 编译错误 z是一个引用，必须初始化
    
    return 0;
}
