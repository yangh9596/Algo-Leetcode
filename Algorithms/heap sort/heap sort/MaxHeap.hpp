//
//  MaxHeap.hpp
//  heap sort
//
//  Created by Lois on 2017/5/7.
//  Copyright © 2017年 Lois Hu. All rights reserved.
//

#ifndef MaxHeap_hpp
#define MaxHeap_hpp


#define parent(x) (x-1)/2; //获得亲节点在数组中的下标
#define left(x) 2*x+1; //获得左节点在数组中的下标
#define right(x) 2*(x+1); //获得右节点在数组中的下标

void MaxHeapify(int* arr, int i, int HeapSize);
void BuildMaxHeap(int* arr, int length);
void HeapSort(int* arr, int length);

#endif /* MaxHeap_hpp */
