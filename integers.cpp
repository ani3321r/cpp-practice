#include<iostream>
#include<cstdint>

using namespace std;

int main(){
    //1 byte = 8 bits

    printf("Size of the datatype is %ld bits\n", sizeof(int)*8);
    printf("Size of the datatype is %ld bits\n", sizeof(char)*8);
    printf("Size of the datatype is %ld bits\n", sizeof(short int)*8);
    printf("Size of the datatype is %ld bits\n", sizeof(long int)*8);
    printf("Size of the datatype is %ld bits\n", sizeof(long long int)*8);

    printf("Size of the datatype is %ld bits\n", sizeof(int16_t)*8);// this is another way of defining the type of int

    printf("Size of the datatype is %ld bits\n", sizeof(int16_t)*8);// this is for unnsigned int of 16 bits

    int hex = 0x16;// for writing a hex value, it starts from 0x
    printf("value is %d\n", hex);// here the hexadecimal value changes to decimal
    
    int bin = 0b00010110;// for binary it starts from 0b
    printf("value is %d\n", bin);// here the binary value changes to decimal
}
// both int and long int are 32 bits