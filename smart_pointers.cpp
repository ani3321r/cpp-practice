#include<iostream>
#include<string>
#include<memory>
using namespace std;


class User{
    public:
    User(){
        cout << "User created\n";
    }

    ~User(){
        cout << "User deleted\n";
    }

    void testFunc(){
        cout << "This is a test function\n";
    }

};

int main(){
    {
        unique_ptr<User> raiden = make_unique<User>(); //syntax of declaring a unique pointer
        
        raiden->testFunc();
    }// the code here stays within the scope

    {
        shared_ptr<User> brad = make_shared<User>();

        weak_ptr<User> wbrad = brad;// we don't have to create the first instance of the pointer like the others

        shared_ptr<User> brad2 = brad;// syntax of coping a pointer

        brad2->testFunc();// as the total pointer is being copied we can use the functions written in the class
    }

    return 0;
}
// due to the use of smart pointers the memory management is being automated