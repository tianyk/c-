//
//  main.cpp
//  p4.13
//
//  Created by doog on 2017/6/7.
//
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(int argc, const char * argv[]) {
    int i; double d;
    
    d = i = 3.5;
    cout << i << "  " << d << endl; // i是int类型，将3.5赋值给i会丢弃小数位,i=3，然后把i赋值给d
//  3  3
    
    i = d = 3.5;
    cout << i << "  " << d << endl;
//  3  3.5
    
    return 0;
}
