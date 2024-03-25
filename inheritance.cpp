#include<iostream>
#include<string>
using namespace std;

class Avenger{
    string _name;
    int _age;
    Avenger(){}

    protected:
        Avenger(const string & name, const int & age)
        : _name(name), _age(age){}
        void run(){puts("I can run");}

    public:
        void sayMyName() const;
};

void Avenger::sayMyName() const {
    cout << "My name is " << _name << " and age is " << _age << endl;
}// we must create take out time to create our base class so when we make our derived classes it will be easier

//Ironman

class Ironman : public Avenger{
    bool flight;

    public:
        Ironman(string name) : Avenger(name, 40){}
        void run(){puts("I can fly, why would i run lol");}
};

//Black Widow

class BlackWidow : public Avenger{
    bool flight;

    public:
        BlackWidow(string name) : Avenger(name, 36){}
        void run(){puts("I can run very fast");}
};

int main(){

    Ironman Tony("Stark");
    Tony.sayMyName();
    Tony.run();

    BlackWidow Natasha("Romanoff");;
    Natasha.sayMyName();
    Natasha.run();

    return 0;
}