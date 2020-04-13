//
//  main.cpp
//  p4.9
//
//  Created by doog on 2017/6/7.
//
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(int argc, const char * argv[]) {
    const char *cp = "Hello Wrold";
    
//    先把 cp 和 *cp转换成 bool
//    非0是true
    if (cp && *cp)
        cout << "true" << endl;
    
    return 0;
}
