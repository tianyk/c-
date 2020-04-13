//
//  main.cpp
//  2.3.3
//
//  Created by doog on 2017/5/27.
//
//

#include <iostream>

// 声明符
// * 和 & 只是类型修饰符
// int* p 这种形式虽然合法的，但是容易产出误导。基本数据类型是int而非int*，*仅仅是修饰了p而已。
// int* p1, p2; // p1执行int类型的指针，p2是int。
int main()
{
    int i = 1024, *p = &i, &r = i;
//    i 是一个int型的数，p是一个int型的指针，r是一个int型的引用。
    return 0;
}
