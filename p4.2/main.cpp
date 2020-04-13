//
//  main.cpp
//  p4.2
//
//  Created by doog on 2017/6/7.
//
//

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

// . 的优先级要比 * 高
int main(int argc, const char * argv[]) {
    vector<int> vec = { 1, 3, 5 };
    
    cout << *vec.begin() << endl; // 等价于 *(vec.begin())
//    1
    cout << *vec.begin() + 1 << endl; // 等价于 *(vec.begin()) + 1
//    2
    
    return 0;
}
