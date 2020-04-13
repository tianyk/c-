//
//  main.cpp
//  2.3.3_1
//
//  Created by doog on 2017/5/27.
//
//

#include <iostream>

// 指针的指针
//**表示指向指针的指针，***表示指向指针指针的指针
int main()
{
    int ival = 1024;
    int *pi = &ival;
    int **ppi = &pi;
    
    std::cout << pi << "  " << ppi << std::endl;
//    0x7fff5fbff708  0x7fff5fbff700
    std::cout << pi << "  " << *ppi << std::endl;
//    0x7fff5fbff708  0x7fff5fbff708
    std::cout << pi << "  " << **ppi << std::endl;
//    0x7fff5fbff708  1024
    return 0;
}
