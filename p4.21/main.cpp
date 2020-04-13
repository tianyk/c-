//
//  main.cpp
//  p4.21
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
    vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    
    for (auto &v : vec)
        if (v % 2 != 0) v = v * 2;
    
    for (auto v : vec)
        cout << v << "  ";
    cout << endl;
    
    return 0;
}
