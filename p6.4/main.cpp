//
//  main.cpp
//  p6.4
//
//  Created by doog on 2017/6/13.
//
//

#include <iostream>
#include <string>
#include <stdexcept>
#include <exception>
using std::runtime_error;
using std::exception;
using std::endl;
using std::string;
using std::cout;
using std::cerr;
using std::cin;


int fact(int cnt) {
    int ret = 1;
    while(cnt > 1)
        ret *= cnt--;
    return ret;
}

int main(int argc, const char * argv[]) {
    int cnt;
    while(cin >> cnt)
        cout << fact(cnt) << endl;
    
    return 0;
}
