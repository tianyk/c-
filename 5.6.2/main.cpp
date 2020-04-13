//
//  main.cpp
//  5.6.2
//
//  Created by doog on 2017/6/9.
//
//

#include <iostream>
#include <string>
#include <stdexcept>
using std::runtime_error;
using std::endl;
using std::string;
using std::cout;
using std::cin;

int main(int argc, const char * argv[]) {
    string item1, item2;
    
    while(cin >> item1 >> item2) {
        try {
            if (item1 != item2)
                throw runtime_error("Data must refer to some ISBN.");
            cout << item1 << item2 << endl;
        } catch(runtime_error err) {
            cout << err.what() << "\nTry Again? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n') break;
        }
    }
    
    return 0;
}
