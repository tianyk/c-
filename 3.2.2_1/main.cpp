//
//  main.cpp
//  3.2.2_1
//
//  Created by doog on 2017/6/1.
//
//

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    string line;
    while(getline(cin, line))
        if (!line.empty() && line.size() > 10)
            cout << line << endl;
    
    string::size_type length = line.size(); // size_type unsigned long
    cout << length;
    return 0;
}
