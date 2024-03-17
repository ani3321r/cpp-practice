#include<iostream>
using namespace std;

int main(){
    int card;
    card = 45;
    int my_card;

    int *ptr;
    ptr = &card;

    my_card = *ptr; //pointer deref

    cout << my_card << "\n";
    printf("The value of the pointer is: %p\n", ptr);
    return 0;
}