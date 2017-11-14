//
//  main.cpp
//  225_Implement Stack using Queues
//
//  Created by 胡杨 on 9/1/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

class Stack {
public:
    queue<int> q;
    // Push element x onto stack.
    void push(int x) {
        q.push(x);
    }
    
    // Removes the element on top of the stack.
    void pop() {
        for(int i = 1; i <= q.size()-1; i++) {
            q.push(q.front());
            q.pop();
        }
        q.pop();
    }
    
    // Get the top element.
    int top() {
        return q.back();
    }
    
    // Return whether the stack is empty.
    bool empty() {
        return q.empty();
    }
};



int main(int argc, const char * argv[]) {
    
    
    
    
    return 0;
}
