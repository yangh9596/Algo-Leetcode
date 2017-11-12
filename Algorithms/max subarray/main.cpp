//
//  main.cpp
//  max subarray
//
//  Created by 胡杨 on 18/03/2017.
//  Copyright © 2017 Lois Hu. All rights reserved.
//  Better to use vector not array
//  T(n) = 2T(n/2)+0(n)

#include <iostream>
#include "List.hpp"
using namespace::std;

int* Difference(int* arr, int length){
    int* arr1 = new int[length-1];
    for(int i = 0; i <= (length-2); i++){
        *(arr1+i) = *(arr+i+1)-*(arr+i);
    }
    return arr1;
}


List MaxCrossingSub(int* arr,int low,int mid,int high){
    int sum = 0;
    int leftsum = INT_MIN;
    int maxleft = low;
    int maxright = high;
    for(int i = mid;i>= low;i--){
        sum += *(arr+i);
        if(sum>leftsum){
            leftsum = sum;
            maxleft = i;
        }
    }
    int rightsum = INT_MIN;
    sum = 0;
    for(int j = mid+1;j<=high;j++){
        sum += *(arr+j);
        if(sum>rightsum){
            rightsum = sum;
            maxright = j;
        }
    }
    List result(maxleft,maxright,leftsum+rightsum);
    return result;
}


List MaxSubarray(int* arr,int low, int high){
    List Left,Mid,Right,temp;
    if(high==low)
        temp = List(low,high,arr[low]);
    else{
        int mid = (low+high)/2;
        Left = MaxSubarray(arr, low, mid);
        Mid = MaxCrossingSub(arr, low, mid, high);
        Right = MaxSubarray(arr, mid+1, high);
        if((Left.sum>=Mid.sum)&&(Left.sum>=Right.sum))
            temp = Left;
        else if(Right.sum>=Mid.sum&&(Right.sum>=Left.sum))
            temp = Right;
        else temp = Mid;
    }
    
    return temp;
}

int main() {
    int A[10] = {7,3,7,22,45,4,9,6,16,8};
    int* DiffA = Difference(A, 10);
    for(int i = 0; i <= 8;i++)
        cout << *(DiffA+i) << ",";
    cout << endl;
    cout << "**********" << endl;
    // ...
    
    
    cout << MaxSubarray(DiffA, 0, 8) << endl;
    
    delete[] DiffA;
    return 0;
}
