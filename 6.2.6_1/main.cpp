//
//  main.cpp
//  6.2.6_1
//
//  Created by doog on 2017/6/14.
//
//

#include <iostream>
#include <initializer_list>
#include <string>
using std::string;
using std::initializer_list;
using std::begin;
using std::end;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

void print_err_msg(int code, initializer_list<string> msg) {
    cout << "code: " << code << endl;
    
    for (auto m : msg)
        cout << m << endl;
}

int main(int argc, const char * argv[]) {
    print_err_msg(404, { "NOT FOUND.", "http://www.baidu.com" });
    return 0;
}
