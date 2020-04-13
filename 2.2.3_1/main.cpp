//
//  main.cpp
//  2.2.3_1
//
//  Created by doog on 2017/5/26.
//
//

#include <iostream>

int reused = 42;
int main()
{
    std::cout << "reused: " << reused << std::endl;
//    reused: 42
    
    int reused = 32;
    std::cout << "reused: " << reused << std::endl;
//    reused: 32
    
    return 0;
}
