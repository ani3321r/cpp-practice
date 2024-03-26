#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> myints = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    partition(myints.begin(), myints.end(), [](auto x){return x%2 == 0;});
    for(int x : myints){
        cout << x << " ";
    }
    cout << "\n";
    // due to the use of partition, all the even numbers are shifted to the left and the odds are shifted to the right

    stable_partition(myints.begin(), myints.end(), [](auto x){return x%2 == 0;});
    for(int x : myints){
        cout << x << " ";
    }
    cout << "\n";
    // the stable partition tries to maintain the order also, it is not reccomended as it do not really works properly

    return 0;
}
