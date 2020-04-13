//
//  main.cpp
//  3.3.3_1
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
    vector<unsigned> scores(11, 0);
    unsigned grade;
    
    while (cin >> grade) {
        if (grade <= 100) {
            ++scores[grade/10];
        }
    }

    for (auto score : scores)
        cout << score << endl;
    
    return 0;
}
