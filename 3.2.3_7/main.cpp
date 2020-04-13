//
//  main.cpp
//  3.2.3_7
//
//  Created by doog on 2017/6/2.
//
//

#include <iostream>
#include <string>
#include <cctype>
#include <typeinfo>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    const string s = "Keep out!";
    
//    c 的类型是 const char
    for (auto &c : s) {
        cout << c << "  " << typeid(c).name() << endl;
    }
    
    return 0;
}
