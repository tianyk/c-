//
//  main.cpp
//  6.3.2_2
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

// 不能返回局部对象的引用或指针？为什么必须 const
const string &complex(string &s) {
    return (*s.end() == 's') ? s : s + 's';
}


int main(int argc, const char * argv[]) {
    string s = "name";
    cout << complex(s) << endl;
    
    return 0;
}
