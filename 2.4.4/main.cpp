//
//  main.cpp
//  2.4.4
//
//  Created by doog on 2017/5/27.
//
//

#include <iostream>

// 常量表达式
// c++11中允许将变量声明为constexpr类型以便由编译器来验证变量的值是否是一个常量表达式。
// constexpr指针的初始值必须是nullptr或者0，或者是存储于某个固定地址中的对象。
// 函数内定义的变量一般来说并非存放在固定地址中，因此constptr指针不能指向这样的变量。
// constptr能把他定义的对象置为顶层const

constexpr int *np = nullptr; // np是一个常量指针，其值为空
int j = 0;
constexpr int i = 42; // i 是一个整数常量
int main()
{
    // i 和 j必须定义在函数体之外
    constexpr const int *p = &i; // p 是一个常量指针(constexpr能将顶层置为const)，他指向整形常量i; 等价于 const int *const p = &i;
//    const int *const pp = &i;
    
    constexpr int *pl = &j; // pl 是一个常量指针，指向整数j
    return 0;
}
