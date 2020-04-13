//
//  main.cpp
//  3.5.5_1
//
//  Created by doog on 2017/6/5.
//
//

#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include <cstring>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;


// 使用数组初始化vector对象
//c++允许使用数组来初始化vector对象，只需要指明要拷贝的首尾地址即可。
int main(int argc, const char * argv[]) {
    int  int_arr[] = {0, 1, 2, 3, 4, 5};
    
    vector<int> ivec(begin(int_arr), end(int_arr));
    
    for (auto i : ivec)
        cout << i <<endl;
    
    return 0;
}
