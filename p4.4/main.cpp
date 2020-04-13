//
//  main.cpp
//  p4.4
//
//  Created by doog on 2017/6/7.
//
//

#include <iostream>
using std::cout;
using std::endl;

int main(int argc, const char * argv[]) {
    auto r = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
//    int r = ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2)
//    4 * 4 + 75 + 0 / 2 = 16 + 75 = 91
    cout << r << endl;
    
    return 0;
}
