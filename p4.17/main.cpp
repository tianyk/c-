//
//  main.cpp
//  p4.18
//
//  Created by doog on 2017/6/7.
//
//

#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, const char * argv[]) {
    vector<int> v = { 1, 3, 5 };
    
    auto pbeg = v.begin();
    
    while (pbeg != v.end())
        cout << *pbeg++ << endl; // *pbeg ; pbeg++
//    1 3 5
    
    pbeg = v.begin();

    while (pbeg != v.end())
        cout << *++pbeg << endl; // *pbeg ; pbeg++
//    3 5 0
    
    return 0;
}
