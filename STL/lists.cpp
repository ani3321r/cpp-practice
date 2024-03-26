#include<iostream>
#include<algorithm>
#include<list>

using namespace std;

int main(){

    list<int> mylist;

    for (int i=4; i <= 10; ++i){
        mylist.push_back(i);
    }

    cout << mylist.front() << endl;

    cout << mylist.back() << endl;

    mylist.pop_back();

    mylist.reverse();// it only works for integers properly

    for(auto i : mylist){
        cout << i << " ";
    }

    cout << endl;

    mylist.sort();
    for(auto i : mylist){
        cout << i << " ";
    }

    return 0;
}