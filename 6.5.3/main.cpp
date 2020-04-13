//
//  main.cpp
//  6.5.3
//
//  Created by doog on 2017/6/19.
//
//

#include <iostream>
#include <initializer_list>
#include <string>
#include <vector>
#include <cassert>
using std::vector;
using std::string;
using std::initializer_list;
using std::begin;
using std::end;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int division(int x, int y) {
    assert(y != 0);
    return x / y;
}

int main(int argc, const char * argv[]) {
    cout << division(1, 0) << endl;
    
    return 0;
}
