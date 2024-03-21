#include<iostream>
using namespace std;

int main(){
    int *ptr;

    ptr = new int [100];// this is allocating an array size of 100 indexes using the "new" keyword

    try
    {
         ptr = new int [100];
         cout << "Memory space is being allocated";
    }
    catch(...)
    {
        cout << "Memory allocation failed";
    }// it is always recommended to use try catch block if we are allocating large memory 

    delete [] ptr;// here we are deleting all the allocated space
    
    return 0;
}
