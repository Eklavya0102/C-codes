// //sort(), Copy()< Swap(), Merge(),replace() and remove()

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main (){
//     vector <int> V1 = {3,4,2,1,5};
//     vector <int> V2= {10,20,30,40,50};
//     vector <int> result(10);

//     cout<<"\n Original vector V1 = ";
//     for (int x : V1){
//         cout<<x<<" ";
//     }

//     sort(V1.begin(), V1.end());
//     cout<<"\n After sorting V1 = ";
//     for (int x : V1){
//         cout<<x<<" ";
//     }

//     copy(V1.begin(), V1.end(), V2.begin());

//     V1.swap(V2);
//     cout<<"\n After swapping V2 = ";
//     for (int x : V2){
//         cout<<x<<" ";
//     }
//     sort(V1.begin(), V1.end());
//     sort(V2.begin(), V2.end());

//     merge(V1.begin(), V1.end(), V2.begin(), V2.end(), result.begin());
//     cout<<"\n After merging result = ";
//     for (int x : result){
//         cout<<x<<" ";
//     }

//     replace(V1.begin(), V1.end(), 1, 100);
//     cout<<"\n After replacing V1 = ";
//     for (int x : V1){
//         cout<<x<<" ";
//     }
    
//     remove(V1.begin(), V1.end(), 100);
//     cout<<"\n After removing V1 = ";
//     for (int x : V1){
//         cout<<x<<" ";
//     }
//     return 0;
// }


//queue
#include<iostream>
#include<map>
#include<queue>
using namespace std;

int main(){
    queue <int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout<<"Display the Queue: ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"\n"<<endl;
    
    //map
    map<int,string> m;

    cout<<"map content: "<<endl;
    m[1]="Eklavya";
    m[2]="Asmi";
    m[3]="Bibek";

    for(auto x : m){
        cout<<x.first <<x.second <<endl;
    }

    if(m.find(2)!=m.end()){
        cout<<"Key Found";
    }
    else{
        cout<<"Key Not found";
    }
    return 0;
}
