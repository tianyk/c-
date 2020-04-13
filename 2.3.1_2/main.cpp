//
//  main.cpp
//  2.3.1_2
//
//  Created by doog on 2017/5/26.
//
//

#include <iostream>

int main()
{
    double salary = 1000.01;
//    int &mySalary = salary; // 编译错误。引用类型必须和被应用对象一样
    double &mySalary = salary;
    
//    double youSalary = 1000.02;
//    &mySalary = youSalary;
    
    std::cout << "salary: " << salary << " mySalary:" << mySalary << std::endl;
//    salary: 1000.01 mySalary:1000.01
    return 0;
}
