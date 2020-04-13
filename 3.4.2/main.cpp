//
//  main.cpp
//  3.4.2
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
    vector<string> say = { "my", "name", "is", "ming" };
    
    auto b = say.begin();
    cout << *b << endl;
//    my
    cout << *(b + 8) << endl;
//    ""
    cout << *(b - 8) << endl;
//    ""
    
    return 0;
}
