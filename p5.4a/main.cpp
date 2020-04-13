//
//  main.cpp
//  p5.4a
//
//  Created by doog on 2017/6/9.
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
    vector<int> vec = { 1, 2, 3, 4 };
    auto iter = vec.begin();
    while (iter != vec.end()) {
        cout << *iter;
        ++iter;
    }
    cout << endl;
    
    return 0;
}
