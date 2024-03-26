#include<iostream>
#include<string>

using namespace std;

int main(){

    []{cout << "Hello\n";}();// here we are declaring a lambda
    [](){return 500;};// syntax for returning a lambda directly

    auto sum = [](auto a, auto b){return a + b;};// this is lambda, not a function. Lambda also save a litte bit of memory than functions. 

    cout << "Sum of 8 and 9 is: " << sum(8,9) << endl;
    cout << "Sum of 8.5 and 6 is: " << sum(8.5,6) << endl;

    string a = "rai";
    string b = "den";
    cout << sum(a,b) << endl;

    return 0;
}