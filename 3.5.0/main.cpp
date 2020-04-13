//
//  main.cpp
//  3.5.0
//
//  Created by doog on 2017/6/5.
//
//

#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;


int main(int argc, const char * argv[]) {
    unsigned cnt = 42;
    constexpr unsigned sz = 42;
    
    int arr[10]; // 含所有10个整数的数组
    int *parr[sz]; // 含有42个整型指针的数组
    string bad[cnt]; // 编译错误 cnt 不是常量表达式
//    string strs
    
    return 0;
}
