//
//  main.cpp
//  1.4.2
//
//  Created by doog on 2017/5/24.
//
//

#include <iostream>

int main()
{
    int sum = 0;
//    先执行初始化；检查循环条件；执行循环体；执行第三个表达式；判断，通过执行循环体，不通过退出循环；
//    val 作用域在循环体内
    for (int val = 1; val <= 10; val++)
        sum += val;
    
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
}
