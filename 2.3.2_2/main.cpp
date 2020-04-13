//
//  main.cpp
//  2.3.2_2
//
//  Created by doog on 2017/5/26.
//
//

#include <iostream>
#include <cstdlib>

// 空指针
int main()
{
//    nullptr 是c++11新标准引入的。它是一种特殊类型的字面值，可以被转换为其他任意的指针
    int *p = nullptr;
    int *p2 = 0;
    int *p3 = NULL; // NULL 预处理变量。有预处理器处理，预处理器是运行于编译之前的一段程序。
    
    std::cout << p << "  " << p2 << "  " << p3 << std::endl;
//    0x0  0x0  0x0
    std::cout << *p << "  " << *p2 << "  " << *p3 << std::endl;
//    程序异常
}
