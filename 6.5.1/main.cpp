//
//  main.cpp
//  6.5.1
//
//  Created by doog on 2017/6/19.
//
//

#include <iostream>
#include <initializer_list>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::initializer_list;
using std::begin;
using std::end;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int add(int a = 0, int b = 0) {
    return a + b;
}

int main(int argc, const char * argv[]) {
    cout << add(2, 1) << endl;
    return 0;
}
