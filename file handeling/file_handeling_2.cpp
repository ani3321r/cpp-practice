#include<iostream>
#include<string>
constexpr int maxbuffer = 1024;

int main(){
    const char *filename = "newfile.txt";
    const char *info = "raiden is very powerfull ";

    // FILE *fh = fopen(filename, "w");// the write keeps the same amount of data

    // FILE *fh = fopen(filename, "a");// whereas the append keeps adding more data 

    // for(int i = 0; i < 50; ++i){
    //     fputs(info, fh);
    // }
    // fclose(fh);

    char buf[maxbuffer];

    FILE *fh = fopen(filename, "r");
    while(fgets(buf, maxbuffer, fh)){
        fputs(buf, stdout);// the stdout dumps all the output to the terminal
    }
    fclose(fh);


    return 0;
}