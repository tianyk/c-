//
//  main.cpp
//  p4.20
//
//  Created by doog on 2017/6/7.
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
    vector<string> strs = {"a", "", "c"};
    vector<string>::iterator it = strs.begin();
    
    cout << *it++ << endl; // 等价于 (*it) 然后 it++
    
//    cout << (*it)++ endl; // 编译错误 string 不能++
    
//    cout << *it.empty() << endl; // 编译错误 (*it).empty();
    
    cout << it->empty() << endl; // 等价于 (*it).empty();
    
//    cout << ++*it << endl; // 编译错误
    
    cout << it++->empty() << endl; // 等价于 it->empty(); it++
    
    return 0;
}
