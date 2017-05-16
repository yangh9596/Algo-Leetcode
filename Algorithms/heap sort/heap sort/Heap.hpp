//
//  Heap.hpp
//  heap sort
//
//  Created by Lois on 2017/5/7.
//  Copyright © 2017年 Lois Hu. All rights reserved.
//

#ifndef Heap_hpp
#define Heap_hpp

#include <iostream>
#include <algorithm>
#define parent(x) (x-1)/2; //获得亲节点在数组中的下标
#define left(x) 2*x+1; //获得左节点在数组中的下标
#define right(x) 2*(x+1); //获得右节点在数组中的下标


using namespace std;

template <typename T> class Heap{
public:
    T* m_array;
    int m_size;
    int m_length;
    

    
    Heap(); // Default constructor
    Heap(Heap<T>& h);
    Heap(T& arr, int length); //
    ~Heap();
    void MaxHeapify(int i);
    void BuildMaxHeap();
    void HeapSort();
   
};

template <typename T>
ostream& operator << (ostream& os, const Heap<T>& source);


#endif /* Heap_hpp */
