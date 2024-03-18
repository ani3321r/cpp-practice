#include<iostream>
using namespace std;

int main() {
    char str1[] = "raiden";
    char str2[] = {'r', 'a', 'i', 'd', 'e', 'n', 0};

    for (int i = 0; str1[i] != 0; i++)
    {
        cout << "char is: " << str1[i] << endl;
    }// this is simple.
    cout << endl;
    

    for (int i = 0; str2[i] ; i++)
    {
        cout << "char is: " << str2[i] << endl;
    }// this condition also works as, as long as the element is not 0 the condition is true.
    cout << endl;

    for (char *cp = str1; *cp != 0; cp++)
    {
        cout << "char is: " << *cp << endl;
    }// here the character pointer iterates through the string.
    cout << endl;
    
    for(char i : str1){
        if(i == 0) break;
        cout << "Char is: " << i << endl;
    }

    return 0;
}