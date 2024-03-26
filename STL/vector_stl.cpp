#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector<int> nums;
    vector<string> avengers {"Ironman", "Spiderman", "Thor", "Hulk"};

    nums.push_back(5);
    nums.push_back(3);
    nums.push_back(6);
    nums.push_back(8);

    for (int i = 0; i <= 5; ++i)
    {
        nums.push_back(i);
    }
    
    cout << nums.size() << endl << nums.capacity() << nums.max_size() << endl;

    cout << nums.empty() << endl;

    for (auto i = nums.begin(); i != nums.end(); ++i)
    {
        cout << *i << " ";
    }
    

    return 0;
}