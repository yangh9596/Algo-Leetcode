//
//  main.cpp
//  unordered set
//
//  Created by 胡杨 on 2017/5/14.
//  Copyright © 2017年 Lois Hu. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main(int argc, const char * argv[]) {
    
    vector<int> v1(6);
    int i = 0;
    for(auto it = v1.begin();it!=v1.end();it++){
        i++;
        if(i%2==0){
            *it = (i+1);
        }else *it = i;
        cout << *it << endl;
    }
    cout << "******" << endl;
    
    unordered_set<int> myset(begin(v1),end(v1));
    myset.insert(10);
    myset.insert(5);
    for(auto iter = myset.begin(); iter!=myset.end();iter++)
        cout << *iter << endl;
    cout << "******" << endl;
    
    // Summary
    cout << "bucket_count：" << myset.bucket_count() << endl;
    cout << "max_bucket_count：" << myset.max_bucket_count() << endl;
    cout << "bucket_size：" << myset.bucket_size(0) << endl;
    cout << "load_factor：" << myset.load_factor() << endl;
    cout << "max_load_factor：" << myset.max_load_factor() << endl;
    cout << "******" << endl;
    
    // Delete
    myset.erase(5);
    for(auto iter = myset.begin(); iter!=myset.end();iter++)
        cout << *iter << endl;
    
    
    return 0;
}
