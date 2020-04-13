//
//  main.cpp
//  2.5.3_3
//
//  Created by doog on 2017/5/31.
//
//

#include <iostream>

int main()
{
    int a = 3, b = 4;
    decltype(a) c = 4; // int c = 4;
    decltype(a = b) d = a; // int &d = a;
    
    d = 4;
    std::cout << a << std::endl;
//    4
    return 0;
}
