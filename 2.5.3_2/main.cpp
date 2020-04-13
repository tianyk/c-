//
//  main.cpp
//  2.5.3_2
//
//  Created by doog on 2017/5/31.
//
//

#include <iostream>

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a; // int c = a;
    decltype((b)) d = a; // int &d = a;
    
    ++c;
    ++d;
    std::cout << a << "  " << b << std::endl;
    
}
