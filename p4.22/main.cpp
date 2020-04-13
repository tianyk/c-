//
//  main.cpp
//  p4.22
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
    
    for (unsigned g; cin >> g;)
        if (g > 90) cout << "high pass" << endl;
        else if (g > 75) cout << "pass" << endl;
        else if (g > 60) cout << "low pass" << endl;
        else cout << "fail" << endl;
    
    return 0;
}
