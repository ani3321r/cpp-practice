#include<iostream>
using namespace std;

int main(){
    int rating = 4;
    switch(rating){
        case 1:
            puts("Thanks for rating 1 star");
            break;
        case 2:
            puts("Thanks for rating 2 star");
            break;
        case 3:
            puts("Thanks for rating 3 star");
            break;
        case 4:
            puts("Thanks for rating 4 star");
            break;
        case 5:
            puts("Thanks for rating 5 star");
            break;// this statement is used to throw the control flow just outside the block
        default:
            puts("Please enter a valid input");    
    }// outside the block means here

    return 0;
}