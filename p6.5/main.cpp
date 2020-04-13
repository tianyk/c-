//
//  main.cpp
//  p6.5
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

int abs(int x) {
    if (x == 0) return 0;
    else if (x > 0) return x;
    else return -x;
}

int main(int argc, const char * argv[]) {
    cout << abs(1) << endl;
    cout << abs(-1) << endl;
    cout << abs(0) << endl;

    return 0;
}
