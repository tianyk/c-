//
//  main.cpp
//  3.5.3
//
//  Created by doog on 2017/6/5.
//
//

#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main(int argc, const char * argv[]) {
    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    auto ia2(ia); // 整型指针
    cout << typeid(ia2).name() << endl;
//    Pi
    
    cout << *ia << endl;
    cout << *(ia + 3) << endl;
    
    int *beg = begin(ia);
    int *last = end(ia);
    
    cout << endl;
    
    while (beg != last) {
        cout << *beg << endl;
        ++beg;
    }
    
    
    cout << "ia size: " << end(ia) - begin(ia) << endl;
    
    return 0;
}
