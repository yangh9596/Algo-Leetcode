//
//  main.cpp
//  merge sort
//
//  Created by Yolanda on 9/9/17.
//  Copyright © 2017 Yang Hu. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void Merge(vector<T> &v, int p, int q, int r) {
    vector<T> R(r-q);
    vector<T> L(q-p+1);
    
    for(int i = 0; i<=(r-q-1); i++)
        R[i] = v[i+q+1];
    for(int i = 0; i<=(q-p);i++)
        L[i] = v[i+p];
    R.push_back(100000);
    L.push_back(100000);
    int i=0;
    int j=0;
    
    for(int k = p; k<=r; k++) {
        if(L[i]<R[j]) {
            v[k] = L[i];
            i++;
        }
        else {
            v[k] = R[j];
            j++;
        }
    }
    return;
}

template <typename T>
void MergeSort(vector<T> &v, int p, int r) {
    if(p<r) {
        int q = (p+r)/2;
        MergeSort(v, p, q);
        MergeSort(v, q+1, r);
        Merge<T>(v,p,q,r);
    }
    
    return;
}



int main(int argc, const char * argv[]) {
    
    vector<int> v1{2,5,3,8,5,23,53,12,3};
    
    for(vector<int>::iterator it = v1.begin(); it!= v1.end();++it) {
        cout << *it << ' ';
    }
    cout << endl;
    
    MergeSort(v1, 0, 8);
    
    cout << "After sorting:" << endl;
    for(vector<int>::iterator it = v1.begin(); it!= v1.end();++it) {
        cout << *it << ' ';
    }
    cout << endl;
    
    return 0;
}
