//
//  main.cpp
//  p4.32
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
    constexpr int size = 5;
    int ia[size] = { 1, 3, 5, 7, 11 };
    
//
    for (int *ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr)
        cout << *ptr << "  " << ix << endl;
    return 0;
}
