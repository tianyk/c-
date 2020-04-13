//
//  main.cpp
//  6.5.3_1
//
//  Created by doog on 2017/6/19.
//
//

#ifndef NDEBUG
#define NDEBUG
#endif

#include <iostream>
#include <initializer_list>
#include <string>
#include <vector>
#include <cassert>
using std::vector;
using std::string;
using std::initializer_list;
using std::begin;
using std::end;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

void print(const int ia[], size_t size) {
    cerr << __FILE__ << " : " << __func__ << " array size is " << size << endl;
}

int main(int argc, const char * argv[]) {
    int arr[1] = {};
    
    print(arr, end(arr) - begin(arr));
    return 0;
}
