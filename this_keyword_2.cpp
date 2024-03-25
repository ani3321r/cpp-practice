#include<iostream>
#include<string>
using namespace std;

class Rectangle{
    double _length;
    double _breadth;

    public:
        Rectangle(double l = 2.0 , double b = 2.0){
            _length = l;
            _breadth = b;
        }

    double Area(){
        return _length * _breadth; 
    }    

    int compare(Rectangle rectangle){
        return this->Area() > rectangle.Area();// in this code truthy and falsey values are also returned
    }
};

int main(){
    Rectangle h1(5.0, 6.0);
    Rectangle h2(3.0, 2.0);

    cout << h1.compare(h2);

    if(h1.compare(h2)){
        cout << "H2 is smaller";
    } else {
        cout << "H2 is Larger";
    }

    return 0;
}