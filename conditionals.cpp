#include<iostream>
using namespace std;

int main(){
    if(0){
        puts("this will not run");
    }// for 0, NULL and false the code will not be executed
    if(1){
        puts("This will run\n");
    }// other than the above mentioned values if any value is in the condition, it will run

    int rating = 5;
    printf("Your rating is %s\n", rating > 5 ? "good" : "You can do better");// this is a ternary operator


    return 0;
}