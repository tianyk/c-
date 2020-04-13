//
//  main.cpp
//  6.5.2_1
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

constexpr int new_sz() {
    return 42;
}

int main(int argc, const char * argv[]) {
    const int foo = new_sz();
    cout << foo << endl;
    return 0;
}
