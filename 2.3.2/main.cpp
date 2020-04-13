//
//  main.cpp
//  2.3.2
//
//  Created by doog on 2017/5/26.
//
//

#include <iostream>

// 指针
// 与引用类似，指针也实现了对其他对象的间接访问。和引用不同的是指针本身是一个对象。
int main()
{
    int ival = 42;
    int *p = &ival;
    
    std::cout << p << std::endl;
//    0x7fff5fbff728
    
    std::cout << *p << std::endl;
//    42
    
    *p = 10;
    std::cout << *p << std::endl;
//    10
    return 0;
}
