//
//  main.cpp
//  p4.6
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
    while(cin >> n)
        if (n % 2 == 0)
            cout << n << "是偶数" << endl;
        else
            cout << n << "是奇数" << endl;
        
    return 0;
}
