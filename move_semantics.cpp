#include<iostream>
#include<string>

using namespace std;

void swap(int &a, int &b){

    int temp = move(a);// here a new memory space is not being created, the memory is just being moved
    a = move(b);
    b = move(temp);
}

string printing(){
    return "Just a print statement";
}

int main(){

    int a = 3;
    int b = 5;

    swap(a,b);

    cout << "A: " << a << endl;

    string s = printing();// here the variable s copies the reference from the function and takes extra space in the memory

    string&& s2 = printing();// here the variable s2 is showing the moved data from the function, and takes no extra space in memory

    return 0;
}