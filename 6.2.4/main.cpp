//
//  main.cpp
//  6.2.4
//
//  Created by doog on 2017/6/14.
//
//

#include <iostream>
using std::begin;
using std::end;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

void print2(const int *cp, int size) {
    while(size-- > 0)
        cout << *cp++ << endl;
    
}

void print(const int cp[], int size) {
    for (int i = 0; i < size; ++i)
        cout << cp[i] << endl;
    
}

int main(int argc, const char * argv[]) {
    int arr[10] = {1, 3, 5, 7, 11};
    print(arr, end(arr) - begin(arr));
    return 0;
}
