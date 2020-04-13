//
//  main.cpp
//  3.3.0
//
//  Created by doog on 2017/6/2.
//
//

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> say = {"my", "name", "is", "lee"};
    
    vector<string> v1{"my", "name", "is", "lee"};
    
    vector<int> ivec(10, -1); // 10个int类型的元素，每个都被初始化为-1
    
    vector<string> svec(10, "hi"); // 10个string类型的元素，每个都被初始化为hi
    
    vector<long> lvec(10); // 10个元素，每个都被初始化为0
    vector<string> sverc2(10); // 10个元素，每个都被初始化为空string对象
    
    return 0;
}
