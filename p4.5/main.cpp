//
//  main.cpp
//  p4.5
//
//  Created by doog on 2017/6/7.
//
//

#include <iostream>
using std::cout;
using std::endl;

int main(int argc, const char * argv[]) {
    cout << -31 * 3 + 21 / 5 << endl; // -93 + 4 = -89
    
    cout << -30 + 3 * 21 / 5 << endl; // -30 + 63 / 5 = -30 + 12 = -18
    
    cout << 30 / 3 * 21 % 5 << endl; // 10 * 21 % 5 = 210 % 5 = 0;
    
    cout << -30 / 3 * 21 % 4 << endl; // -10 * 21 % 4 = -210 % 4 = -2;
    
    return 0;
}
