//
//  main.cpp
//  heap sort
//
//  Created by Lois on 2017/5/6.
//  Copyright © 2017年 Lois Hu. All rights reserved.
//  Heap Sorting


#include <iostream>
#include "MaxHeap.hpp"
#include "Heap.hpp"
//#include "MinHeap.hpp"

using namespace std;
int main() {
    
    int arr[] = {2,3,5,88,3,32,12,66,35,11,8,9};
    cout << "Original:" << endl;
    for(int i = 0;i <= 11;i++)
        cout << arr[i] << ",";
    cout << endl;
    
    HeapSort(arr, 12);
    cout << "Ascending:" << endl;
    for(int i = 0;i <= 11;i++)
        cout << arr[i] << ",";
    cout << endl;
    
    
    // Using a heap object
    //Heap<int> h1 = Heap<int>(arr, 12);
    
    Heap<int> h1;
    cout << h1 << endl;
    
    return 0;
}
