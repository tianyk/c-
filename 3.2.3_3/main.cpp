//
//  main.cpp
//  3.2.3_3
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
    const string hexdigits = "0123456789ABCDEF";
    cout << "输入一个数字（0-15）" << endl;
    string result;
    string::size_type n;
    while (cin >> n) {
        if (n < hexdigits.size())
            result += hexdigits[n];
    }
    
    cout << "你输入的数字是: " << result << endl;
}
