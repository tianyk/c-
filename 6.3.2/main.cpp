//
//  main.cpp
//  6.3.2
//
//  Created by doog on 2017/6/15.
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

// 返回的是s或者s+'s'的副本
string complex(string &s) {
    return (*s.end() == 's') ? s : s + 's';
}

int main(int argc, const char * argv[]) {
    string s = "name";
    cout << complex(s) << endl;
    
    return 0;
}
