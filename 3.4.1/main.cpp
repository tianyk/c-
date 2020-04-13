//
//  main.cpp
//  3.4.1
//
//  Created by doog on 2017/6/5.
//
//

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, const char * argv[]) {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << endl;
    
    return 0;
}
