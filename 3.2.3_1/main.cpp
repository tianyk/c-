//
//  main.cpp
//  3.2.3_1
//
//  Created by doog on 2017/6/2.
//
//

#include <iostream>
#include <string>
#include <cctype>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    string s("some string");
    if (!s.empty())
        s[0] = toupper(s[0]); // 下标运算返回值是改为自字符的引用
    
    cout << s << endl;
}
