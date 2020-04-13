//
//  main.cpp
//  2.3.2_3
//
//  Created by doog on 2017/5/27.
//
//

#include <iostream>

// 指针可以参与运算和作为条件
int main()
{
    int ival = 1024;
    int *pi = nullptr;
    int *pi2 = &ival;
    
    if (pi)
        std::cout << "pi is true.\n";
    else
        std::cout << "pi is false.\n";
//    pi is false.
    
    std::cout << "pi2: " << pi2 << std::endl;
//    pi2: 0x7fff5fbff6e8
    std::cout << "pi2 + 1 = " << pi2 + 1 << std::endl;
//    pi2 + 1 = 0x7fff5fbff6ec
    
    std::cout << *pi2 << std::endl;
//    1024
    std::cout << *(pi2 + 1) << std::endl;
//    0
    
    return 0;
}
