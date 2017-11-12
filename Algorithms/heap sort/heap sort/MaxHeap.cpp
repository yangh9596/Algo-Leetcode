//
//  MaxHeap.cpp
//  heap sort
//
//  Created by Lois on 2017/5/7.
//  Copyright © 2017年 Lois Hu. All rights reserved.
//

#include "MaxHeap.hpp"
#include <algorithm>

void MaxHeapify(int* arr, int i, int HeapSize){
    int l = 2*i;
    int r = 2*+1;
    int largest=0;
    if( (l<=(HeapSize-1)) && (arr[l]>arr[i]) )
        largest = l;
    else largest = i;
    if( (r<=(HeapSize-1)) && (arr[r]>arr[largest]) )
        largest = r;
    if(largest!=i){
        std::swap(arr[i],arr[largest]);
        MaxHeapify(arr, largest, HeapSize);
    }
    return;
}

void BuildMaxHeap(int* arr, int length){
    // From bottom to top
    for(int i = (length/2-1); i>=0; i--){
        MaxHeapify(arr, i, length);
    }
    return;
}


void HeapSort(int* arr, int length){
    BuildMaxHeap(arr, length);
    for(int i = (length-1); i>= 1; i--){
        //std::cout << "l: " << length << std::endl;
        std::swap(arr[0],arr[i]);
        length--;
        MaxHeapify(arr, 0, length);
    }
    return;
}
