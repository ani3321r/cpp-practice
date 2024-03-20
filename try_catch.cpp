#include<iostream>
using namespace std;

int main(){
    char api = 'a';

    try{
        cout << "calling the api\n";
        throw api;
        cout << "this will not run\n";// after throw anything will not be executed
    } catch(int x){
        cout << "integer exception\n";
    } catch(float f){
        cout << "float exception\n";
    } catch(...){// when we are uncertain of what exact catch block must be included, we use "..." 
        cout << "Something went wrong\n";
    }// here only the last catch block will be executed as the datatype do not matches any of the other catch blocks.

    return 0;
}