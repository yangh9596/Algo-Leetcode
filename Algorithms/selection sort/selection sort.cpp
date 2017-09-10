//
//  main.cpp
//  selection sort
//
//  Created by Lois on 05/03/2017.
//  Copyright © 2017 Lois Hu. All rights reserved.
//  selection sort

#include <iostream>
using namespace std;


int main() {
    int arr[10] = {8,4,2,5,6,9,10,11,3,23};
    //
    for(int k =0;k<=9;k++){
        cout << arr[k] << ",";
    }
    //
    int i = 0;
    while(i<=9){
        int temp = arr[i];
        int index = i;
        for(int j=i;j<=9;j++){
            if(temp > arr[j]){  // Find out the smallest number in the sub-array
                temp = arr[j];
                index = j;
            }
        }
        arr[index] = arr[i]; // Exchange the place
        arr[i] = temp;
        i++;
    }
    cout << "************" << endl;
    //
    for(int k =0;k<=9;k++){
        cout << arr[k] << ",";
    }
    return 0;
}

