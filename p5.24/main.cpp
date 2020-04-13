//
//  main.cpp
//  p5.24
//
//  Created by doog on 2017/6/12.
//
//

#include <iostream>
#include <string>
#include <stdexcept>
using std::runtime_error;
using std::endl;
using std::string;
using std::cout;
using std::cin;

int main(int argc, const char * argv[]) {
    int a, b;
    while(cin >> a >> b) {
        if (b == 0) throw runtime_error("除数不能为0");
        cout << (a / b) << endl;
    }
    
    return 0;
}
