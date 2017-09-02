//
//  main.cpp
//  155_Min Stack
//
//  Created by 胡杨 on 9/1/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//  Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

//  push(x) -- Push element x onto stack.
//  pop() -- Removes the element on top of the stack.
//  top() -- Get the top element.
//  getMin() -- Retrieve the minimum element in the stack.

#include <iostream>
#include <stack>
using namespace std;


class MinStack {
public:
    stack<int> s1;
    stack<int> s2;
    
    /** initialize your data structure here. */
    MinStack(): s1(), s2() {
        
    }
    
    void push(int x) {
        s1.push(x);
        if(s2.empty()||x<=this->getMin())
            s2.push(x);
    }
    
    void pop() {
        if(this->getMin()==s1.top())
            s2.pop();
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};



int main(int argc, const char * argv[]) {
    
    return 0;
}
