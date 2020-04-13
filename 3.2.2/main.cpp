//
//  main.cpp
//  3.2.2
//
//  Created by doog on 2017/6/1.
//
//

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string age;
    cout << "age: " << age << " age.empty = " << age.empty() << endl;
    
    string name = "yoyo";
    cout << name << endl;
    
    cout << "输入新名字: " << endl;
    cin >> name;
    cout << name << endl;
    
    cout << "name.size = " << name.size() << endl;
    
    string say = "my name is " + name + ".";
    cout << say << endl;
    
    string you, me;
    cout << "请输入你的名字：" << endl;
    cin >> you;
    cout << "请输入我的名字：" << endl;
    cin >> me;
    
    if (you == me) {
        cout << "我们的名字一样\(^o^)/" << endl;
        cout << "我们的首字母是[" << you[0] << "]" << endl;
    } else {
        cout << "我们的名字不一样ヽ(｀⌒´)ﾉ" << endl;
    }
    
    return 0;
}
