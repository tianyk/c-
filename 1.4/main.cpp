//
//  main.cpp
//  1.4
//
//  Created by doog on 2017/5/24.
//
//

#include <iostream>

// while loop
int main()
{
    int sum = 0, val = 11;
    
//    先判断条件，判断通过后执行，执行完再判断，通过执行，不通过循环结束。
    while (val <= 10) {
        sum += val++;
//         ++val;
    }
    
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
}
