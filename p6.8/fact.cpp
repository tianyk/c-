//
//  fact.cpp
//  c++
//
//  Created by doog on 2017/6/13.
//
//

#include "fact.h"

int fact(int x) {
    int ret = 1;
    while(x > 1) {
        ret *= x--;
    }
    return ret;
}
