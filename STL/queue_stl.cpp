#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int main(){

    queue<int> myq;

    myq.push(11);
    myq.push(19);
    myq.push(16);
    myq.push(18);

    cout << myq.front() << endl;
    cout << myq.back() << endl;
    myq.pop();// here the first value which is being pushed, is popped first
    cout << myq.front() << endl;

    while(!myq.empty()){
        cout << " " << myq.front();
        myq.pop();
    }// this is not a good method for printing the queue as after this operation the queue becomes empty
    cout << "\n";
    cout << "out\n";
    cout << myq.front() << endl;

    priority_queue<int> mypq;

    mypq.push(99);
    mypq.push(56);
    mypq.push(68);
    mypq.push(6);

    while(!mypq.empty()){
        cout << " " << mypq.top();
        mypq.pop();
    }// in priority queue the largest value will bubble up to the top automatically


    return 0;
}