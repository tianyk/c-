//
//  main.cpp
//  p5.25
//
//  Created by doog on 2017/6/12.
//
//

#include <iostream>
#include <string>
#include <stdexcept>
#include <exception>
using std::runtime_error;
using std::exception;
using std::endl;
using std::string;
using std::cout;
using std::cerr;
using std::cin;

int main(int argc, const char * argv[]) {
    int a, b;
    while(cin >> a >> b) {
        try {
            if (b == 0) throw runtime_error("除数不能为0");
            cout << (a / b) << endl;
        } catch(runtime_error re) {
            cout << re.what() << "\n是否继续？y/n" << endl;
            char c;
            cin >> c;
            if (c == 'n') break;
        } catch(exception ex) {
            cerr << "Error occurred: " << ex.what() << endl;
        } catch(...) {
            // catch any other errors (that we have no information about)
            cerr << "Unknown failure occurred. Possible memory corrupton" << endl;
        }
    }
    
    return 0;
}
