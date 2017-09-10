//
//  main.cpp
//  Insert sorting
//
//  Created by 胡杨 on 03/03/2017.
//  Copyright © 2017 Lois Hu. All rights reserved.
//  Insert sorting

#include <iostream>
using namespace std;
int main() {
    int arr[10] = {12,5,6,7,99,9,11,3,4,10};
    
    for(int k=0; k<=9; k++)
        cout << arr[k] << ",";
    /*
     // ascending order
    for(int j=1; j<=9; j++){
        int key = arr[j];
        int i = j-1;
        while(i>0&&arr[i]>key){
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }
    */
    
    // descending order
    for(int i = 1; i<=9; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j>=0&&arr[j]<temp; j--)
                arr[j+1] = arr[j];
        arr[j+1] = temp;
        
    }
    
    cout << endl;

    for(int i=0; i<=9; i++)
        cout << arr[i] << ",";
    return 0;
}

