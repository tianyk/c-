//
//  main.cpp
//  3.6.1_3
//
//  Created by doog on 2017/6/5.
//
//

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

//遍历多维数组
int main(int argc, const char * argv[]) {
    int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

//    使用范围for循环
//    将外城循环的控制变量声明定义为引用类型，避免数组被自动转换成指针。
    for (const int (&row)[4] : ia) {
        for (int col : row)
            cout << col << "  ";
        cout << endl;
    }
    
    cout << endl;
    
//    使用下标
    for (size_t i = 0; i != 3; i++) {
        for (size_t j = 0; j != 4; j++)
            cout << ia[i][j] << "  ";
        cout << endl;
    }
    
    cout << endl;

//    使用引用
    for (int (*row)[4] = ia; row != ia + 3; ++row) {
        for (int *col = *row; col != *row + 4; ++col)
            cout << *col << "  ";
        cout << endl;
    }

    
    return 0;
}
