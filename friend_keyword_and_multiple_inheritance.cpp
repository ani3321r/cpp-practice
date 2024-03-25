#include<iostream>
#include<string>
using namespace std;

class Money{
    public:
        void gotMoney(){puts("Got a lot of money");}
};

class Avenger{
    string _name;
    int _age;
    Avenger(){}

    friend class Ironman;
    friend class BlackWidow;// to give private access to other classes we use the "friend" keyword, this is not reccomended as it exposes all the data

    protected:
        Avenger(const string & name, const int & age)
        : _name(name), _age(age){}
        void run(){puts("I can run");}
        void Age(){printf("My age is %d\n", _age);}

    public:
        void sayMyName() const;
};

void Avenger::sayMyName() const {
    cout << "My name is " << _name << " and age is " << _age << endl;
}// we must create take out time to create our base class so when we make our derived classes it will be easier

//Ironman

class Ironman : public Avenger, public Money{ // this class can derive data from two classes, i.e., multiple inheritance 
    bool flight;

    public:
        Ironman(string name) : Avenger(name, 40){}
        void run(){puts("I can fly, why would i run lol");}
        void Age(){printf("My age is %d\n", _age);}// here we get the private "_age" access due to the use of "friend" keyword
};

//Black Widow

class BlackWidow : public Avenger{
    bool flight;

    public:
        BlackWidow(string name) : Avenger(name, 36){}
        void run(){puts("I can run very fast");}
        void Age(){printf("My age is %d\n", _age);}
};

int main(){

    Ironman Tony("Stark");
    Tony.sayMyName();
    Tony.run();
    Tony.gotMoney();

    BlackWidow Natasha("Romanoff");;
    Natasha.sayMyName();
    Natasha.run();

    return 0;
}