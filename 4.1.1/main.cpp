//
//  main.cpp
//  4.1.1
//
//  Created by doog on 2017/6/6.
//
//

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char * argv[]) {
    int i = 0;
    
//    i 和 ++i的求值顺序是不固定的
    cout << i << "  " << ++i << endl;
    
    return 0;
}
