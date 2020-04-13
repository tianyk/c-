//
//  main.cpp
//  3.5.4
//
//  Created by doog on 2017/6/5.
//
//

#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include <cstring>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main(int argc, const char * argv[]) {
    const char str1[] = "A string example";
    const char str2[] = "A different string";
    
    cout << strlen(str1) << endl;
    cout << strlen(str2) << endl;
    
    cout << strcmp(str1, str2) << endl;
    
    char str[80] = {};
    cout << strcat(str, str1) << endl;
    cout << strcat(str, str2) << endl;
    cout << strlen(str) << endl;
    
    return 0;
}
