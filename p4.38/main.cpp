//
//  main.cpp
//  p4.38
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
    int j = 10, i = 3;
    
    
    // j / i = 3 把3转换为double
    double slope = static_cast<double>(j / i);
    
    cout << slope << endl;
    
    return 0;
}
