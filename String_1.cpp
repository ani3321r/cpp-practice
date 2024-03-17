#include <iostream>
#include <string>
using namespace std;

int main(){
    string dog_name;
    cout << "Enter your dog's name: \n";
    getline(cin, dog_name);
    cout << dog_name << " is a very cute dog.\n";
    return 0;
}
