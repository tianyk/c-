//
//  main.cpp
//  6.5.2
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


inline const string &shorterString(const string &s1, const string &s2) {
    return s1.size() <= s2.size() ? s1 : s2;
}


int main(int argc, const char * argv[]) {
    string s1 = "abc";
    string s2 = "abcd";
    
    cout << shorterString(s1, s2) << endl;
    return 0;
}
