//
//  Heap.cpp
//  heap sort
//
//  Created by Lois on 2017/5/7.
//  Copyright © 2017年 Lois Hu. All rights reserved.
//

#include "Heap.hpp"

template <typename T>
Heap<T>::Heap(): m_array(0), m_size(0), m_length(0){
}

template <typename T>
Heap<T>::Heap(T& arr, int length){
    m_length = length;
    m_size = m_length;
    m_array = new T[m_length];
    for(int i = 0; i <= m_length; i++)
        m_array[i] = arr[i];
}

template <typename T>
Heap<T>::Heap(Heap<T>& h){
    m_length = h.m_length;
    m_size = h.m_size;
    delete[] m_array;
    m_array = new T[m_length];
    for(int i = 0; i <= m_length; i++)
        m_array[i] = h.m_array[i];
}

template <typename T>
Heap<T>::~Heap(){
    delete[] m_array;
}

template <typename T>
void Heap<T>::MaxHeapify(int i){
    int l = left(i);
    int r = right(i);
    int largest=0;
    if( (l<=(this->m_size-1)) && (m_array[l]>m_array[i]) )
        largest = l;
    else largest = i;
    if( (r<=(this->m_size-1)) && (m_array[r]>m_array[largest]) )
        largest = r;
    if(largest!=i){
        std::swap(m_array[i],m_array[largest]);
        this->MaxHeapify(largest);
    }
    return;
}
template <typename T>
void Heap<T>::BuildMaxHeap(){
    for(int i = (m_length/2-1); i>= 0; i--)
        this->MaxHeapify(i);
    return;
}

template <typename T>
void Heap<T>::HeapSort(){
    this->BuildMaxHeap();
    for(int i = (m_length-1); i>=1; i--){
        std::swap(m_array[0],m_array[i]);
        m_size--;
        this->MaxHeapify(0);
    }
    return;
}

template <typename T>
ostream& operator<<(ostream& os, const Heap<T>& source) {
    for(int i = 0; i <= source.m_length; i++){
        os << source.m_array[i] << ",";
    }
    return os;
}


