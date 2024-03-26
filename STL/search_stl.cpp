#include<bits/stdc++.h>
using namespace std;

int main(){

    int nums[6] = {2, 9, 6, 7, 5, 8};

    if (binary_search(nums, nums+6, 2))
    {
        cout << "Number found" << endl;
    } else{
        cout << "Number not found" << endl;
    }
    

    return 0;
}