#include<iostream>
#include<string>

using namespace std;

class Phone{
    string _name = "";
    string _os = "";
    int _price = 0;
    //Phone() //we must define this type class defination in the private member in order to make the code ambiguity free
    public:
        Phone(); //default constructor
        Phone(const string & name, const string & os, const int & price); // parameter constructor
        Phone(const Phone &); // copy constructor
        string getName(){return _os;}
        int getPrice();
        ~Phone(); 
};

Phone::Phone() : _name(), _os("Oneui"), _price(){
    puts("Default constructor");
} 

Phone::Phone(const string & name, const string & os, const int & price) : _name(name), _os(os), _price(price){
    puts("parameter constructor");
}

Phone::Phone(const Phone & values){
    puts("Modified copy constructor");
    _name = "new-"+values._name;
    _os = "skinned-"+values._os;
    _price = values._price;
}

Phone::~Phone(){
    printf("Destructor called for %s\n", _name.c_str());
}

int Phone::getPrice(){
    printf("Value of getPrice is %p\n", this);// "this" is a self referencing pointer
    return _price;
}

int main(){
    Phone samsungS23;// here the default constructor will be called
    cout << samsungS23.getName() << endl;

    Phone Iphone15("IP15", "IOS", 899);// here the parameter constructor will be called
    cout << Iphone15.getName() << endl;

    printf("Value of object is %p\n", &samsungS23);// here we are accessing the pointer address using just the address specifier

    cout << samsungS23.getPrice() << endl;// here we are accessing the pointer using the getPrice function whre the "this" keyword is used. 

    Phone samsungS24 = samsungS23;// here the copy constructor will be called
    cout << samsungS24.getName() << endl; 

    return 0;
}