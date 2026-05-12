#include<iostream>
#include<queue>
#include<map>
using namespace std;

int main()
{
    // Queue
    queue<int> q;

    // Insert
    q.push(10);
    q.push(20);
    q.push(30);

    // Display
    cout<<"Queue elements: ";
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }


    // Map
    map<int,string> m;

    // Insert
    m[1]="Ram";
    m[2]="Shyam";
    m[3]="Hari";

    // Display
    cout<<"\nMap elements:\n";

    for(auto x : m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    // Find
    if(m.find(2)!=m.end())
        cout<<"Key found";
    else
        cout<<"Key not found";

    return 0;
}