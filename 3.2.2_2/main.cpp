//
//  main.cpp
//  3.2.2_2
//
//  Created by doog on 2017/6/2.
//
//

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;

// 由于历史遗留问题，也为了兼容c。C++语言中的字符串字面值并不是标准库类型string对象。切记：字符串字面值与string是不容的类型。
int main()
{
    string s1 = "Hello, ", s2 = "Wrold\n";
    string s3 = s1 + s2; // s2的内容是Hello, World\n
    
    s1 += s2; // 等价于 s1 = s1 + s2;
    
    s3 = s1 + ", " + s2 + '\n'; // 字符和字符串字面值能自动转为 string
    
    string s4 = s1 + ", "; // 正确：把一个string对象和一个字面值相加
//    string s5 = "Hello" + ","; // 错误：两个对象都不是string
    
    string s6 = s1 + "," + "world"; // 正确：每个加法运算都有一个运算对象时string 等价于 (s1 + ",") + "world";
//    string s7 = "Hello" + ", " + s2; // 错误：不能吧字面值直接相加 等价于 ("Hello" + ", ") + s2;
    
    return 0;
}
