// Function overloading means Multiple function with same name but different work according to their parameter or type

#include<iostream>
using namespace std;

class calculator{
    public:
    int add(int a, int b){
        return a+b;
    }

    float add(float a, float b,float c){
        return a+b+c;
    }

    float add(float a,float b, float c, float d){
        return a+b+c+d;
    }
};


int main (){
    calculator c;
    cout<<"Two numbers addition only int = " <<c.add(1,2)<< endl;
    cout<<"Three numbers addition = " <<c.add(2.5,2,2)<< endl;
    cout<<"Four number addition = "<<c.add(2,2,2,2)<< endl;

    return 0;
}