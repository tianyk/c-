//
//  main.cpp
//  4.11.1
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
    bool flag; char cval;
    short sval; unsigned short usval;
    int ival; unsigned int uival;
    long lval; unsigned long ulval;
    float fval; double dval;
    
    cout << 3.14159L + 'a' << endl; // 先把a转化为int,然后将int 转化为long double
    
    cout << dval << "  " << ival << "  " << (dval + ival) << endl; // 把ival转话为double
    
    return 0;
}
