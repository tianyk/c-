//
//  main.cpp
//  p4.37
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
    string s = "x";
    char a = 'a';
    int i = 0; double d = 0.1; const string *ps = &s; char *pc = &a; void *pv = &s;
    
//    pv = (void*)ps;
    ps = static_cast<string*>(pv);
    cout << *ps << endl;
//    x
    
//    i = int(*pc);
    i = static_cast<int>(*pc);
    cout << i << endl;
//    97
    
    pv = &d;
    
//    pc = (char*) pv;
    pc = static_cast<char*>(pv);
    cout << pc << endl;
    
    return 0;
}
