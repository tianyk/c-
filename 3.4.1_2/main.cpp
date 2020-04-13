//
//  main.cpp
//  3.4.1_2
//
//  Created by doog on 2017/6/5.
//
//

#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;


int main(int argc, const char * argv[]) {
    string say  = "My name is Ming.";
    
    for (auto it = say.begin(); it != say.end(); ++it)
        *it = toupper(*it);
    
    for (auto s : say)
        cout << s;
    
    cout << endl;
    
    return 0;
}
