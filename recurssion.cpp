#include <iostream>
int factorial(int n);

int main(){
    int n;
    std::cout << "Enter the value: ";
    std::cin >> n;

    std::cout << "The factorial of " << n  << " is " << factorial(n) << std::endl;// "::" this is called scope resolution

    return 0;
}

int factorial(int n){

    if(n > 1){
        return n * factorial(n-1);
    } else {
        return 1;
    }
}