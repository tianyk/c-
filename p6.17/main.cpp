//
//  main.cpp
//  p6.17
//
//  Created by doog on 2017/6/13.
//
//

#include <iostream>
#include <string>
#include <stdexcept>
#include <exception>
#include <cctype>
#include "fact.h"
using std::runtime_error;
using std::exception;
using std::endl;
using std::string;
using std::cout;
using std::cerr;
using std::cin;

void to_upper(string &s) {
    for (auto &c : s)
        c = toupper(c);
}

int main(int argc, const char * argv[]) {
    string s = "tianyongke";
    to_upper(s);
    cout << s << endl;
    return 0;
}
