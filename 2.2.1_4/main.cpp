//
//  main.cpp
//  2.2.1_4
//
//  Created by doog on 2017/5/26.
//
//

#include <iostream>

// 对比例子2.2.1_2，int类型的初始值不一样？！！
// 对于函数体之外的变量被初始化为0，定义在函数内部的‘内置类型’变量不被初始化。未初始化的变量含有一个不确定的值。
std::string global_str;
int global_int;
int main()
{
    std::cout << "global_str: " << global_str << " global_int: " << global_int << std::endl;
//    global_str:  global_int: 0
    
    int local_int;
    std::string local_str;
    std::cout << "local_str: " << local_str << " local_int: " << local_int << std::endl;
//    local_str:  local_int: 32767
    return 0;
}
