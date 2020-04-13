//
//  main.cpp
//  2.3.2_4
//
//  Created by doog on 2017/5/27.
//
//

#include <iostream>

// void*类型的指针
// void* 可以存任意对象的地址
// 空指针能做的事情有限：拿它和别的指针比较、作为很熟的输入或者输出，或者复制给另外一个void*指针。
// 不能直接操作void*指针所指的对象，应为我们不知道这个对象到底是什么类型。
int main()
{
    double obj = 3014, *pd = &obj;
    
    void *pv = &obj;
    
    std::cout << (pv == pd) << std::endl;
//    1
    
    return 0;
}
