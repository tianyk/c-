//
//  main.cpp
//  2.3.3_2
//
//  Created by doog on 2017/5/27.
//
//

#include <iostream>

// 指针的引用
// 指针是一个对象，所以存在对指针的引用。
int main()
{
    int i = 42;
    int *p = nullptr; // p是一个int类型的指针
    int *&r = p; // r是指针p的引用。要理解r的类型，最简单的办法是从右向左读r的定义，离变量名最近的符号对变量的类型有最直接的影响。P53
    
    r = &i; // r引用了指针p，因此给r赋值就是给p赋值。也就是说p现在是i的指针。
    *r = 0; // r既是p的引用。*r就是*p，这里就是给p指向的对象赋值0。
    return 0;
}
