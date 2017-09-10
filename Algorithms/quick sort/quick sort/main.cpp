//
//  main.cpp
//  quick sort
//
//  Created by Lois on 2017/4/22.
//  Copyright © 2017 Lois Hu. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

// Declaration
int Partition(int* A, int p, int r);
int RandomPartition(int* A, int p, int r);
void QuickSort(int* A, int p, int r);
void RandomQuickSort(int* A, int p, int r);

//
int main() {
    int arr[] = {4,9,3,5,6,7,33,45,78,1};  // 10 numbers
    
    cout << "Original:" << endl;
    for(int i =0; i <= 9;i++)
        cout << arr[i] << ",";
    cout << endl;
    

    
    QuickSort(arr, 0, 9);
    
    cout << "Ordered:" << endl;
    for(int i =0; i <= 9;i++)
        cout << arr[i] << ",";
    cout << endl;
    return 0;
}



// Partition function O(n)
int Partition(int* A, int p, int r){ // take A[r] as the benchmark
    int i = p-1;
    for(int j = p; j <= r-1; j++){
        if(A[j] <= A[r]){
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return (i+1);
}

// Quick sort function  Average: O(nlog(n)) Worst: O(n^2)
void QuickSort(int* A, int p, int r){ // T(n) = 2T(T/n)+O(n)
    if(p<r){
        int q = Partition(A, p, r);
        QuickSort(A, p, q-1);
        QuickSort(A, q+1, r);
    }
}

// Random partition
int RandomPartition(int* A, int p, int r){
    int i = rand() % (r-p+1) + p;
    swap(A[i],A[r]);
    return Partition(A, p, r);
}

void RandomQuickSort(int* A, int p, int r) {
    if(p<r){
        int q = RandomPartition(A, p, r);
        RandomQuickSort(A, p, q-1);
        RandomQuickSort(A, q+1, r);
    }
}
