//
//  main.cpp
//  Add to List 367_Valid Perfect Square
//
//  Created by Yolanda on 11/5/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>
using namespace std;

// quite slow
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==0||num==1) return 1;
        int sq=1;
        for(int k=1;k<=num/2;k++) {
            sq=k*k;
            if(num==sq) {return 1; break;}
        }
        return 0;
    }
};

// 2nd solution: square numbers are always 1+3+5+7
class Solution2 {
public:
    bool isPerfectSquare(int num) {
        int i(1);
        while(num > 0) {
            num -= i;
            i += 2;
        }
        return num==0;
    }
};


int main(int argc, const char * argv[]) {

    return 0;
}
