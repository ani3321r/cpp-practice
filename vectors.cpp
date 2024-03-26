#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Corners{
    float a, b, c, d;
};

ostream& operator<<(ostream& stream, Corners& corner){
    stream << corner.a << " " << corner.b << " " << corner.c << " " << corner.d;
    return stream;
}// here we are modifying the operator as our need

int main(){

    vector<int> inte;// vectors are growing array

    inte.push_back(5);
    inte.push_back(9);
    inte.push_back(7);
    inte.push_back(3);

    for (auto i = inte.begin(); i != inte.end(); ++i)
    {
        cout << *i << endl;
    }

    vector<Corners> corner;

    corner.push_back({3, 5, 6, 9});// due to the modified operator we can take 4 values in an array as input and then print them using the for loop
    corner.push_back({1, 2, 8, 7});

    for (int i = 0; i < corner.size(); ++i)
    {
        cout << corner[i] << endl;
    }
    

    return 0;
}