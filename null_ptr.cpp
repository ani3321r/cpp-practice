#include<iostream>

void printval(int *a){
    printf("The value of pointer is %p\n", a);
}// inspite of having diff functions, due to nullptr this block will only run

void printval(int a){
    printf("The value of integer is %d\n", a);
}

int main(){
    printval(nullptr);// this will show the very first memory address

    return 0;
}