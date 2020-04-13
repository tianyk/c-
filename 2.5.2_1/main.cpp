//
//  main.cpp
//  2.5.2_1
//
//  Created by doog on 2017/5/31.
//
//

#include <iostream>

// auto会忽略顶层的const
int main()
{
    int i = 0, &r = i;
    auto a = r;
    
    const int ci = i, &cr = ci;
    auto b = ci; // b 是一个整数 ci顶层的const被忽略掉了
    std::cout << b++ << "  " << b << "  " << ci << std::endl;
    
    auto c = cr; // c 是一个整数 cr是ci的引用，ci本身是一个顶层const
    std::cout << c++ << "  " << c << "  " << cr << std::endl;
    
    auto d = &i; // d是一个整型指针
    
    auto e = &ci; // e是一个指向整数常量的指针 const int *e = &ci;
    std::cout << *e <<std::endl;
//    *e = 2; // 编译错误 e是一个指向常量的指针 不能赋值
    std::cout << *e << "  " << ci << std::endl;
    
//    如果希望推断出的auto类型是一个顶层const，需要明确指出
    const auto f = ci; // ci的推演类型是int，f是const int
    
//    可以将引用的类型设置为auto，此时原来的初始化规则仍然适用
    auto &g = ci; // g是一个整型常量的引用
//    g = 10; // 编译失败 g是一个整型常量的引用
    
//    auto &h = 42; // 编译错误 不能为非常量引用绑定字面值。但是不能给字面值绑定引用
//     int &x = 1;  // 错误 引用类型的初始值必须是对象
//    const int &x = 1; 正确 常量引用
    const auto &j = 42; // 可以为常量引用绑定字面值 ？？？
    
//    在一条语句中定义多个变量时，切记符号&和*只从属于某个声明符号，而非基本数据类型的一部分，因此初始值必须是同一类型。
    auto k = ci, &l = i; // k 是整数 l是整型引用
    
    auto &m = ci, *p = &ci; // m 是整型的引用 p是指向整型常量的指针
//    auto &m = ci, p = &ci; // 错误 m是在整型引用 p是一个整型指针 &和*从属于声明符，而非类型。auto只是推断出类型。
    
//    auto &n = i, *p2 = &ci; // 错误 i的类型是int，而ci的类型是const int
    
    return 0;
}
