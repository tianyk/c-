//
//  main.cpp
//  p4.27
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
    unsigned long ul1 = 3, ul2 = 7;
    //    0000 0011
    //    0000 0111
    
//    两个对象对应的位置都是1，运算结果中该位位1，否则为0；
    cout << (ul1 & ul2) << endl; //    0000 0011

    cout << (ul1 | ul2) << endl; // 0000 0111
    
    cout << (ul1 && ul2) << endl; // ul1不是0为真 真为1
    
    cout << (ul1 || ul2) << endl; // ul1不是0为真 真为1
    
    
    return 0;
}
