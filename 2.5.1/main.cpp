//
//  main.cpp
//  2.5.1
//
//  Created by doog on 2017/5/27.
//
//

#include <iostream>

// 类型别名
int main()
{
    typedef double wages; // wages 是 double的同义词
    typedef wages base, *p; // base 是double的同义词，p是double*的同义词。
    
    wages hourly = 10, weekly = 1;
    
    typedef char *pstring;
    const pstring cstr = 0; // cstr 是执行char的常量指针。 等价于 char *const cstr = 0;
    
    char x = 'a';
    const pstring cx = &x;  // cx 是执行char的常量指针。 等价于 char *const cx = &x;
    *cx = 'b'; // 可以给指针对象赋值
    std::cout << x << std::endl;
//    b
    char y = 'y';
//    cx = &y; // 报错 不能给指针重新赋值，此指针是常量指针。
    
    const pstring *ps; // ps是一个指针。
}
