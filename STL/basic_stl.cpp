#include<iostream>
using namespace std;

template <typename V>
V maximum(V a, V b){
    return (a > b) ? a : b;
} // this is known as generic programming

int main(){

    cout << maximum(3 , 6) << endl; 

    cout << maximum('s' , 'h') << endl;

    return 0;
}