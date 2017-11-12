//
//  List.hpp
//  max subarray
//
//  Created by 胡杨 on 18/03/2017.
//  Copyright © 2017 Lois Hu. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <iostream>
using namespace std;

class List {
public:
    int low, high, sum;
    List();
    List(int l,int h, int s);
    ~List();
    // print
    // operator overloading
    friend ostream &operator<<(ostream &os,const List &L);

};

// constructor
List::List(){
    low = 0;
    high = 0;
    sum = 0;
}
List::List(int l, int h, int s){
    low = l;
    high = h;
    sum = s;
}

// destructor
List::~List(){
    
}

// operator overloading
ostream & operator<<(ostream &os, const List& L){
    os << "Low:" << L.low << " " << "High:" << L.high << " " << "Sum:" << L.sum << " ";
    return os;
}

#endif /* List_hpp */
