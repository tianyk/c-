//
//  main.cpp
//  2.3.2_5
//
//  Created by doog on 2017/5/27.
//
//

#include <iostream>

int main()
{
    int i = 0;
    
//    double* dp = &i; // 编译错误。不能吧int类型的指针赋值给double型指针。
    int* ip = &i;
//    int *ip2 = i; // 编译错误。 *pi2是指针类型。i是int类型
    int *p = &i;
    return 0;
}
