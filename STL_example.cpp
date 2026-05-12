#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {40,10,30,20};

    // Algorithm
    sort(v.begin(), v.end());

    // Iterator
    vector<int>::iterator it;

    cout<<"Sorted elements: ";

    for(int x : v)
    {
        cout<<x<<" ";
    }

    return 0;
}