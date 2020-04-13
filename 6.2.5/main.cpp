//
//  main.cpp
//  6.2.5
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


// 处理命令行参数
int main(int argc, const char *argv[]) {
    for (int i = 0; i < argc; ++i)
        cout << i << "  "<< argv[i] << endl;
    
    return 0;
}
