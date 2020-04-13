//
//  main.cpp
//  3.1.0
//
//  Created by doog on 2017/6/1.
//
//

#include <iostream>
using std::cin;
using std::cout;

// 命名空间的 using 声明
// 有了 using 声明就无需专门的前缀也能使用所需的名字了。
// 头文件中不要包含 using 声明
int main()
{
    cout << "请输入一个数字：";
    int i;
    cin >> i;
    cout << i << std::endl;
    return 0;
}
