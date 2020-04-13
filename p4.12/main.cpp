//
//  main.cpp
//  p4.12
//
//  Created by doog on 2017/6/7.
//
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(int argc, const char * argv[]) {
    int i = 0, j = 2, k = 3;
    
    cout << (i != j < k) << endl; // 等价于 (i != (j < k))    j < k的结果是bool,true转换为1false转换为0
    
    return 0;
}
