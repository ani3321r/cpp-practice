#include<iostream>

struct User{
    const int id;
    int age;

    User() : id(100) , age(19){}
};

int main(){
    using namespace std;
    //stack
    int marks = 200;
    User robin;

    //heap
    int *heap_marks = new int;
    *heap_marks = 400;

    delete heap_marks;

    return 0;
}