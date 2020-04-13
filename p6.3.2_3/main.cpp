//
//  main.cpp
//  p6.3.2_3
//
//  Created by doog on 2017/6/17.
//
//

#include <iostream>
#include <initializer_list>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::initializer_list;
using std::begin;
using std::end;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

vector<string> process(string expected, string actual)
{
    if (expected.empty())
        return {};
    else if (expected == actual)
        return {"functionX", "okay"};
    else
        return {"functionX", expected, actual};
}


int add(int a, int b) {
    return {};
}


int main(int argc, const char * argv[]) {
    vector<string> vec = process("a", "b");
    
    for (auto v : vec)
        cout << v << endl;
    cout << add(0, 1) << endl;
    
    return 0;
}
