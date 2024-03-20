#include<iostream>
using namespace std;

int main(){
    float value = 20.2 + 20.2;
    printf("%f", value);//this gives the value 40.400002

    if(value == 40.400002){
        puts("this will not be printed");
    } else {
        puts("\nthis will be printed");
    }// here when we check the value 40.400002 it dosen't matches with "value"

    return 0;
}