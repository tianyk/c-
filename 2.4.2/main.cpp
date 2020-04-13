//
//  main.cpp
//  2.4.2
//
//  Created by doog on 2017/5/27.
//
//

#include <iostream>

// 指向常量的指针。仅仅是它自己认为它指向的是一个常量（它可以指向常量或者非常量），它认为它指向常量所以不能通过它来为被指向对象赋值。
// 指针和const
// 指向常量的指针不能用于改变其所指向的对象的值。要想存放常量对象的地址，指针也要是常量的。
int main()
{
    const double pi = 3.14;
//    double *ptr = &pi; // 编译错误。pi是一个常量，它的指针也应该是常量。
    
    const double *cptr = &pi;
//    *cptr = 43; // 编译错误 cptr指向的是一个常量，不能给*cptr赋值
    
    int age = 10;
    const int *pa = &age;
//    *pa = 11; // 编译错误 pa是常量类型指针，不能给*pa赋值
}
