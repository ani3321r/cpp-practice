#include<iostream>
using namespace std;

template<typename T>

T adding(T a, T b){
    return a + b;
}// templates can handel almost any datatype

int main(){
    int a1 = 5;
    int a2 = 3;
    float a3 = 4.6;
    float a4 = 5.1;

    cout << adding(a3, a4) << endl;
    cout << adding(a1, a2) << endl;

    return 0;
}
