//
//  main.cpp
//  3.3.3
//
//  Created by doog on 2017/6/5.
//
//

#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

int main(int argc, const char * argv[]) {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto &i : v) {
        i *= i;
    }
    
    for (auto i : v)
        cout << i << endl;
    
    return 0;
}
