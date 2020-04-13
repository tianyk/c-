//
//  main.cpp
//  4.1.2
//
//  Created by doog on 2017/6/6.
//
//

#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char * argv[]) {
    vector<int> vec = { 1, 3, 5, 7 };
    
    cout << *vec.begin() << endl; // 等价于*(vec.begin())
//    1
    cout << *vec.begin() + 1 << endl; // 等价于*(vec.begin()) + 1
//    2
    
    return 0;
}
