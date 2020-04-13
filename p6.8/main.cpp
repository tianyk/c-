//
//  main.cpp
//  p6.8
//
//  Created by doog on 2017/6/13.
//
//

#include <iostream>
#include <string>
#include <stdexcept>
#include <exception>
#include "fact.h"
using std::runtime_error;
using std::exception;
using std::endl;
using std::string;
using std::cout;
using std::cerr;
using std::cin;

// 使用gcc++ 或者 clang++ 编译c++代码
// 分离式编译
// clang++ -c main.cpp
// clang++ -c fact.cpp
// clang main.o fact.o 
int main(int argc, const char * argv[]) {
    cout << fact(5) << endl;
    return 0;
}
