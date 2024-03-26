#include<iostream>
#include<string>

using namespace std;

int main(){
    static const char *originalfile = "originalFile.txt";
    static const char *editedfile = "editedFile.txt";

    // FILE *fh = fopen(originalfile, "w"); // this creates a new file
    // fclose(fh);

    // rename(originalfile, editedfile); // this modifies the file name

    remove(editedfile); // this removes the file

    return 0;
}