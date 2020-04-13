//
//  main.cpp
//  p4.10
//
//  Created by doog on 2017/6/7.
//
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(int argc, const char * argv[]) {
    int n = 0;
    
    while(cin >> n && n != 42)
        cout << n << endl;
    
    return 0;
}
