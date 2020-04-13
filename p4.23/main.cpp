//
//  main.cpp
//  p4.23
//
//  Created by doog on 2017/6/8.
//
//

#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, const char * argv[]) {
    string s = "word";
    
    string pl = s + (s[s.size() -1] == 's' ? "" : "s");
    
    cout << pl << endl;
    return 0;
}
