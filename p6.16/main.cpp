//
//  main.cpp
//  p6.16
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

// const 形参
bool is_empty(const string &s) {
    return s.empty();
}

int main(int argc, const char * argv[]) {
    string s = "x";
    cout << is_empty(s) << endl;
    return 0;
}
