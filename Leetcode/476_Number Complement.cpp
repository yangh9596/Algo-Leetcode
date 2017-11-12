//
//  main.cpp
//  476. Number Complement
//
//  Created by Yolanda on 10/3/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//  Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        unsigned temp = ~0;
        while(temp&num) temp <<=1;
        return ~temp&~num;
    }
};

int main() {
    int it(5);
    cout << "The completment of 5 is: " << findComplement(5) << endl;
    return 0;
}



