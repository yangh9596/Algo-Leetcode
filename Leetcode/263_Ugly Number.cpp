//
//  main.cpp
//  263_Ugly Number
/*
 Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. For example, 6, 8 are ugly while 14 is not ugly since it includes another prime factor 7.
 
 Note that 1 is typically treated as an ugly number.
 */
//
//  Created by Yolanda on 10/3/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
using namespace std;

class Solution {
public:
    bool isUgly(int num) {
        if(num<=0) return 0;
        int indicator(1);
        while(indicator) {
            if(num%2==0) {num=num/2;}
            if(num%3==0) {num=num/3;}
            if(num%5==0) {num=num/5;}
            if(num%2!=0&&num%3!=0&&num%5!=0) {
                indicator=0;
            }
        }
        return num==1;
    }
};

int main(int argc, const char * argv[]) {
    int test(14);
    cout << isUgly(test) << endl;
    return 0;
}
