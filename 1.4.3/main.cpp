//
//  main.cpp
//  1.4.3
//
//  Created by doog on 2017/5/24.
//
//

#include <iostream>

int main()
{
    int sum = 0, value = 0;
    std::cout << "enter numbers." << std::endl;
//    std::cin >> value 的返回值是 instream 对象。
//    当使用instream对象作为判断条件时，实际检测的是流的状态。如果流有效，即未遇到错误，那么检测成功。
//    如果遇到文件结束符（windows ctrl + z, *unix ctrl + d），或者一个无效的输入（例如读入的知不是一个整数），instream 对象的状态会变为无效，处于无效状态的istream对象会使条件变假
    while (std::cin >> value) {
//        std::cout << "enter val: " << value << std::endl;
        sum += value;
    }
    
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
