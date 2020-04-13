//
//  main.cpp
//  6.3.2_1
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

const string &shorterString(const string &s1, const string &s2) {
    return s1.size() > s2.size() ? s1 : s2;
}

int main(int argc, const char * argv[]) {
    string s1 = "tian";
    string s2 = "yongke";
    // TODO 返回值是什么？
    string s3 = shorterString(s1, s2);
    s3 = "name";
    
    cout << s1 << "  " << s2 << "  " << s3 << endl;
    
    return 0;
}
