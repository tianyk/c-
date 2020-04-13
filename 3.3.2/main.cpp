//
//  main.cpp
//  3.3.2
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
    vector<int> ages;
    
    for (int i = 0; i < 10; i++)
        ages.push_back(i);
    
    for (decltype(ages.size()) i = 0; i < ages.size(); i++)
        cout << "age[" << i << "]: " << ages[i] << endl;
    
    return 0;
}
