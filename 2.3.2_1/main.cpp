//
//  main.cpp
//  2.3.2_1
//
//  Created by doog on 2017/5/26.
//
//

#include <iostream>

int main()
{
    int i = 42;
    int &r = i; // r是一个引用
    int *p;
    p = &i; // p 是一个指针
//    int x = &i; // 编译报错 x应该是一个int类型的指针
    *p = i; // 把p指针引用的对象的值改为i
    int &r2 = *p; // r2 是一个引用，引用的是指针p对应的对象。
    
    std::cout << i << "  " << r << "  " << p << "  " << *p << "  " << r2 << std::endl;
//    42  42  0x7fff5fbff71c  42  42
    
}
