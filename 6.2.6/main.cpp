//
//  main.cpp
//  6.2.6
//
//  Created by doog on 2017/6/14.
//
//

#include <iostream>
#include <initializer_list>
using std::initializer_list;
using std::begin;
using std::end;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int add(initializer_list<int> ls) {
    int ret = 0;
    for (auto beg = ls.begin(); beg != ls.end(); ++beg)
        ret += *beg;
    return ret;
}

int main(int argc, const char * argv[]) {
    initializer_list<int> ls = {1, 2, 3, 4, 5};
    cout << add(ls) << endl;
    
    cout << add({2, 5, 7, 11}) << endl;
    
    return 0;
}
