//Write a C++ program to demonstrate working of sort(), Copy()< Swap(), Merge(),replace() and remove() algorithms for stl vector container.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v1 = {5,3,1,4,2};
    vector<int> v2 = {10,20,30,40,50};
    vector<int> result(10);

    sort(v1.begin(), v1.end());

    copy(v1.begin(), v1.end(), v2.begin());

    v1.swap(v2);

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    merge(v1.begin(), v1.end(),
          v2.begin(), v2.end(),
          result.begin());

    replace(v1.begin(), v1.end(), 1, 100);

    remove(v1.begin(), v1.end(), 5);

    cout<<"Final vector: ";
    for(int x : v1)
        cout<<x<<" ";

    return 0;
}