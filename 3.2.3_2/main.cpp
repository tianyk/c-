//
//  main.cpp
//  3.2.3_2
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
    string s = "some string";
    for (decltype(s.size()) index = 0; index < s.size() && !isspace(s[index]); ++index) {
        s[index] = toupper(s[index]);
    }
    cout << s << endl;
}
