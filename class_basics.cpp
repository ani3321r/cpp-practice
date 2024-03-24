#include<iostream>
#include<string>

using namespace std;

class User{
    int _secret = 20;// these are called private members
    // it is a good practice to start private member naming with "_".
    public:
        string name = "default";
        void classMessage();    
    void setSecret(const int & newsecret){
        _secret = newsecret;
    }// due to this func, we can access the private member  
    int getSecret() const {return _secret;} //to give constant objects access to private members we use the const 
};

void User::classMessage(){
    {
        cout << "welcome " << name << endl; 
    }
}// a way of writing functions of a class, just for modularity

int main(){
    User raiden;

    raiden.name = "Raiden";// here we are updating the name

    raiden.classMessage();// here we are calling a function from the class

    raiden.setSecret(200);
    cout << raiden.getSecret() << endl;

    const User abc;// this is an constant object
    cout << abc.getSecret() << endl;

    return 0;
}