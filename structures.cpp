#include<iostream>
using namespace std;

struct User{
    const int UserId;// this can't be changed
    const char *name;// here the pointer is constant not the value stored in it, the data can be changed anytime
    const char *email;
    int roll;
};
int main(){
    User Abc = {1, "ani", "ani@ai.com", 10};
    User Efg = {2, "rudh", "rudh@ai.com", 13};

    User *d = &Abc; // this is how we point to a struct

    cout << Abc.email << endl; // we access different components of a struct using "."

    Abc.email = "ani@gmail.com";// this will run due to the fact given above

    d->roll = 11;// this is the syntax when we are using a pointer to a struct

    return 0;
}