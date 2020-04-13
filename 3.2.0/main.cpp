//
//  main.cpp
//  3.2.0
//
//  Created by doog on 2017/6/1.
//
//

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main()
{
    string s1; // ""
    string s2 = s1; // "" s2是s1的复本
    string s3 = "hiya"; // "hiya"
    string s4(10, 'c'); // "cccccccccc"
    
    cout << s1 << "  "  << s2 << "  " << s3 << "  " << s4 << endl;
//        hiya  cccccccccc
    return 0;
}
