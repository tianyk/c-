//
//  main.cpp
//  3.2.3_4
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
    string name = "li ming";
    for (char &c : name)
        if (!isspace(c)) c = '*';
    
    cout << name << endl;
        
    return 0;
}
