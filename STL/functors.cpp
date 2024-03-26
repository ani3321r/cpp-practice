#include<iostream>
using namespace std;

class MyFloat{
    float ft;
    public:
        MyFloat(){
            ft = 0.1;
        }
        void getValue(){
            cout << ft << endl;
        }
        void operator ()(float v){
            ft += v; 
        }// this void function acts as a functor   
};

int main(){

    MyFloat floaty;
    floaty.getValue();

    floaty(2);// here the value is being incrimented
    floaty.getValue();

}