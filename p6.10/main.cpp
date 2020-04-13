//
//  main.cpp
//  p6.10
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

void swap(int &a, int &b) {
    int m = a;
    a = b;
    b = m;
}

int main(int argc, const char * argv[]) {
    int a = 10;
    int b = 0;
    
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}
