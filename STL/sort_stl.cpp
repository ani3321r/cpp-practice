#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    float nums[6] = {2.4, 9.5, 6.4, 6.1, 9.1, 8.5};

    cout << "Unsorted Values: " << endl;
    for(float n : nums){
        cout << n << " ";
    }
    sort(nums, nums+6);// it is a generic way of sorting, it determines automatically which sorting method it should use
    
    //sort_heap(nums, nums+6);

    cout << "\nSorted Values: " << endl;
    for(float n : nums){
        cout << n << " ";
    }

    return 0;
}