//
//  main.cpp
//  p5.23
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
    while(cin >> a >> b)
        cout << (a / b) << endl;
    
    return 0;
}
