//
//  main.cpp
//  2.5.3_1
//
//  Created by doog on 2017/5/31.
//
//

#include <iostream>

int main()
{
    int i = 42, *p = &i, &r = i;
    
    decltype(r + 0) b; // 加法的结果是int，因此b是一个未初始化的int
//    如果表达式的内容是解引用操作，则decltype将得到引用类型
//    decltype(*p) c; // 错误 c是int&，*必须初始化？？？*
    
//    变量名加括号和不加括号类型会不同。如果decltype使用的是一个不加括号的变量，则得到的而结果就是该变量的类型；
//    如果加了一层或者多层括号，编译器就把它当做一个表达式。变量是一种可以作为赋值语句的特殊表达式，所以这个的decltype会得到引用类型
//    decltype((i)) d; // d是一个引用类型，必须初始化
    
    return 0;
}
