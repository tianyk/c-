//
//  main.cpp
//  p6.7
//
//  Created by doog on 2017/6/13.
//
//

#include <iostream>
#include <string>
#include <stdexcept>
#include <exception>
using std::runtime_error;
using std::exception;
using std::endl;
using std::string;
using std::cout;
using std::cerr;
using std::cin;


int count() {
    static int count = 0; // 第一次调用时初始化
    return ++count;
}


int main(int argc, const char * argv[]) {
    for(int i = 0; i < 10; ++i)
        cout << count() << endl;
    return 0;
}
