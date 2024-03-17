#include<iostream>
using namespace std;

int main(){
    int score = 300;
    int *ptr = &score;

    cout << "The value of the score is " << score << "\n";
    cout << "The value of the pointer is " << ptr << "\n";

    int &another_score = score;
    another_score = 600;

    cout << "The value of the score is " << score << "\n";
    cout << "The value of the pointer is " << ptr << "\n";

    return 0;
}
//if we change the value of the reference, the memory address remains the same but the value changes in the same memory address
//any change in the reference will change the actual value