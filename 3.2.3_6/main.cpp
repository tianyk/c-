//
//  main.cpp
//  3.2.3_6
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
//    string s;
//    cout << "请输入一段英文" << endl;;
//    getline(cin, s);
//    
//    string result;
//    for (char c : s)
//        if(!ispunct(c)) result += c;
//    
//    cout << result << endl;
//    
//    return 0;
    cout << "Enter a string of characters including punctuation." << endl;
    for (string s; getline(cin, s); cout << endl)
        for (auto i : s)
            if (!ispunct(i)) cout << i;
    
    return 0;
}
