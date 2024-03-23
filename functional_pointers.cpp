#include<iostream>
using namespace std;

void funcptr(){
    puts("This is a basic function");
}

int main(){
    void (*pointsToTheFunction)() = funcptr;// it is recommended to wrap pointers in braces. Here in this line we are pointing a function

    pointsToTheFunction();// here we are calling it

    (*pointsToTheFunction)();// when we run function for 2nd time it is recommended to follow this syntax, this is dereferencing syntax

    return 0;
}