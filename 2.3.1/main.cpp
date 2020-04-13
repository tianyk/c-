//
//  main.cpp
//  2.3.1
//
//  Created by doog on 2017/5/26.
//
//

#include <iostream>

// 引用即别名
// 引用本身不是对象，不能定义引用的引用。以引用为初始值，实际上是以易用绑定的对象为初始值。
int main()
{
    int age = 10;
    int &myAge = age;
    
    myAge = 11;
    std::cout << "age: " << age << " myAge:" << myAge << std::endl;
//    age: 11 myAge:11
    int _age = myAge;
    std::cout << "age: " << age << " myAge:" << myAge << " _age:" << _age << std::endl;
//    age: 11 myAge:11 _age:11
    _age++;
    std::cout << "age: " << age << " myAge:" << myAge << " _age:" << _age << std::endl;
//    age: 11 myAge:11 _age:12
    return 0;
}
