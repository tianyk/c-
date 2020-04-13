//
//  main.cpp
//  p4.19
//
//  Created by doog on 2017/6/7.
//
//

#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, const char * argv[]) {
    int ival = 0;
    int *ptr = &ival;
    vector<int> vec = {0, 1, 2, 3, 4, 5};
    
    cout << ptr << endl;
    cout << *ptr++ << endl; // 等价于 *ptr, ptr++
    cout << ival << "  " << ptr << endl;
    
//    cout << ptr != 0 << endl; // 报错 ptr是一个指针 不能直接比较
    
    cout << (ival++ && ival) << endl; // ival++ 返回值是0 0是false
    
    cout << endl;
    cout << ival << endl;
    cout << (vec[ival++] <= vec[ival]) << endl; // 先执行比较符左边，后执行右边
    
//    
    cout << (vec[ival] == vec[ival++]) << endl;
    
    return 0;
}
