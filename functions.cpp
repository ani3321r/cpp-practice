#include<iostream>
using namespace std;

void incri_1(int value){
    ++value;
} //this is call by value

void incri_2(int *ref){
    ++(*ref);
} // this is call by reference

void incri_3(int &ref2){
    ++ref2;
}// incrimenting the reference directly

int adding(int a, int b){
    return a + b;
}

float adding(float a, float b){
    return a + b;
}// in cpp we can declare two functions with the same name and cpp is intelligent enough to use the different function in different conditions

int main(){
    //call by value
    int value = 5;
    incri_1(value); // here the value will not be incrimented
    cout << value << endl;

    //call by reference
    int ref = 5;
    incri_2(&ref);// here the value will be incrimented
    cout << ref << endl;

    int ref2 = 5;
    incri_3(ref2);// here the value will be incrimented
    cout << ref << endl;

    int a1 = 5;
    int a2 = 3;
    float a3 = 4.6;
    float a4 = 5.1;
    
    //both of them will work and give the appropriate output
    cout << adding(a3, a4) << endl;
    cout << adding(a1, a2) << endl;

    return 0;
}
