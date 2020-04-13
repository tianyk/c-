//
//  main.cpp
//  p4.29
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
    int x[10];
    int *p = x;
    
//    sizeof 数组对象得到是整个数组对象的大小
    cout << sizeof(x) / sizeof(*x) << endl;
    
    
    cout << sizeof(std::nullptr_t) << "  " << sizeof(int) << endl;
    cout << sizeof(p) / sizeof(*p) << endl;
    
    return 0;
}
