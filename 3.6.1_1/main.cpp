//
//  main.cpp
//  3.6.1_1
//
//  Created by doog on 2017/6/5.
//
//

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;


int main(int argc, const char * argv[]) {
    constexpr size_t rowCnt = 3, colCnt = 4;
    
    int ia[rowCnt][colCnt];
    
    int cnt = 0;
    for (auto &row : ia)
        for (auto &col : row)
            col = cnt++;
    
    for (auto &row : ia) {
        for (auto col : row)
            cout << col << "  ";
        
        cout << endl;
    }

    
    return 0;
}
