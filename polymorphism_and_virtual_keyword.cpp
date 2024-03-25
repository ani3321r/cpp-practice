#include<iostream>
#include<string>
using namespace std;

class One{
    public: 
        virtual void intro(){// due to "virtual" keyword no matter how many classes are adopting it, the classes will work just fine
            cout << "I am one\n";
        } 
};

class Two: public One{
    public: 
        void intro(){
            cout << "I am two\n";
        }
};

class Three: public One{
    public: 
        void intro(){
            cout << "I am three\n";
        }
};

int main(){
    One *a;
    Two b;
    Three c;

    a = &b;
    a->intro();

    a = &c;
    a->intro();// the pointer ambiguity issue is being solved with the help of "virtual" keyword

    return 0;
}

