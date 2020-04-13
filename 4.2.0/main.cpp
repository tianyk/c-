//
//  main.cpp
//  4.2.0
//
//  Created by doog on 2017/6/6.
//
//

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

//求余的结果正负值只和被除数有关
int main(int argc, const char * argv[]) {
    int m = 10;
    int n = 3;
    
    cout << m % n << endl;
//    1
    cout << -m % n << endl;
//    -1
    cout << -m % -n << endl;
//    -1
    cout << m % -n << endl;
//    1
    
    return 0;
}
