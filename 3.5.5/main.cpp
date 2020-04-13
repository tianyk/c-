//
//  main.cpp
//  3.5.5
//
//  Created by doog on 2017/6/5.
//
//

#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include <cstring>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main(int argc, const char * argv[]) {
    string s("Hello World");
    
    const char *str = s.c_str(); // 返回的是一个指针，该指针指向一个字符数组
    cout << *str << endl;
    return 0;
}
