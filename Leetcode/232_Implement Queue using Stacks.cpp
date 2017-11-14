//
//  main.cpp
//  232_Implement Queue using Stacks
//
//  Created by Yolanda on 9/1/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    
public:
    /** Initialize your data structure here. */
    MyQueue(): s1(), s2() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        if(!s1.empty())
            s1.push(x);
        else {
            while(s2.size())
                s1.push(s2.top());
            p1.push(x);
        }
        
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop(void) {
        int ret = peek();
        s2.pop();
        return ret;
    }
    
    /** Get the front element. */
    int peek(void) {
        if (s2.empty())
            while (s1.size())
                s2.push(s1.top()), s1.pop();
        return s2.top();
    }

    
    /** Returns whether the queue is empty. */
    bool empty(void) {
        return s1.empty()&&s2.empty();
    }
    
    
};

// stack member function void pop() and void push(x);
// stack member function <T> top();


int main(int argc, const char * argv[]) {
    
    
    
    return 0;
}
