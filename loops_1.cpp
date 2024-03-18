#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 4, 5, 7, 3, 8};
    int i = 0;
    while(i<7){
        if( i == 2 ){
            break;// due to this statement the indexes after 2 will not be printed
        }
        cout << "Number is " << arr[i] << endl;
        i++;
    }

    cout << "\n";

    while(i<7){
        if( i == 2 ){
            i++;
            continue;// if we don't incriment before continue, the program will return a infinite for loop which is very bad for memory
        }
        cout << "Number is " << arr[i] << endl;
        i++;
    }

    return 0;
}

// here in this program we have got a very  intresting output
/*  Number is 1
    Number is 4

    Number is 7
    Number is 3
    Number is 8
    Number is 0 */    
    // this is output of only the first two while loops if they ran together