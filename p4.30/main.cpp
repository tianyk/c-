//
//  main.cpp
//  p4.30
//
//  Created by doog on 2017/6/8.
//
//

#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;


int main(int argc, const char * argv[]) {
    int x = 10, y = 10;
    cout << sizeof x + y << endl; // 14 等价于 (sizeof x) + y;
    
    string s = "abc", *ps = &s;
    cout << sizeof ps->empty() << endl; // 1 等价于 sizeof(ps->empty())等价于sizeof(bool)
    
    cout << (sizeof x < y) << endl; // 等价于 sizeof(x < y)等价于sizeof(bool)
    
    return 0;
}
