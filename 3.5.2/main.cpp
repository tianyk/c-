//
//  main.cpp
//  3.5.2
//
//  Created by doog on 2017/6/5.
//
//

#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, const char * argv[]) {
    unsigned scores[11] = {}; // 全部初始化为0
    unsigned grade;
    
    while (cin >> grade) {
        if (grade <=100)
            ++scores[grade/10];
    }
    
    for (auto i : scores) {
        cout << i << "  ";
    }
    
    cout << endl;
    
    return 0;
}
