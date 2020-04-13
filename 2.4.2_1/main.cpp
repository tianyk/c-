//
//  main.cpp
//  2.4.2_1
//
//  Created by doog on 2017/5/27.
//
//

#include <iostream>

// const 指针
// 把*放在const关键字前面，说明指针是一个常量。也就是指针指向的地址不可变。
// 常量指针 和 指向常量的指针 不一样。常量指针约束指针不可变（不能再指向其它地址），指向常量的指针约束不能通过指针去修改被引用的对象的值。
int main()
{
    int errNumber = 0;
    int *const curErr = &errNumber; // curErr一直指向errNumber
    
    const double pi = 3.14;
    const double *const pip = &pi; // pip 是一个指向常量的常量指针。有两项约束：一、pip不能再指向其它对象，二、不能通过*pip赋值。
    
    std::cout << *pip;
    return 0;
}
