#include<iostream>
#include<string>

using namespace std;

template <typename T>
void func(T t){
    cout << t << endl;
}

template<typename T, typename... Args>
void func(T t, Args... args){
    cout << t << endl;
    func(args...);// for a list of values the first value is executed in the above line and rest elements are executed using recurssion
}


int main(){

    string value = "abc";

    func(1, 5.2, 6, value, 2.447);// everything will be executed here inspite of  having different datatypes

    return 0;

}