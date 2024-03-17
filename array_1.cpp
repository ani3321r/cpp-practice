#include<iostream>
using namespace std;

int main(){
    int arr_i[5] = {1, 2, 3, 4};
    cout << arr_i << endl;// it prints the very first memory address where the array is allocating from

    cout << arr_i[4] << endl;// if value is not assigned to an index, 0 is pre-defined generally

    int a_arr_i[4];
    a_arr_i[0] = 10;
    a_arr_i[1] = 20;

    cout << a_arr_i[0] << endl;

    *a_arr_i = 60;// this line reassigns the first index value of the array
    //we are changing the value of the reference pointing to the first index value
    cout << a_arr_i[0] << endl;

    cout << a_arr_i[1] << endl;
    int *ptr = a_arr_i;
    ptr++;// here we incriment the pointer to the second address
    *ptr = 90;// that's why the value of the second index is being updated
    cout << a_arr_i[1] << endl;



    return 0;
}