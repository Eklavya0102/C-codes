//constructors are special type of functions inside a class that gets called automatically when an object is created of the class. 
// no return type
// name is same as the name of class

//TYpes: Default, Parameterized, copy

//1) default constructor - no parameter required
// #include<iostream>
// using namespace std;

// class student{
//     private:
//     int x=10;

//     public:
//     student(){
//         cout<<"Rollno: "<<x<<endl;
//     }

// };

// int main(){
//     student s1;

//     return 0;
// }


//parameterized constructor - Constructor which needs parameter to initialize the object of the class
#include<iostream>
using namespace std;

class student{
    private:
    int roll;

    public:
    student(int x){
        roll = x;
        cout<<"Rollno: "<<roll<<endl;
    }

};

int main (){
    student s1(10);

    return 0;
}


// //3) copy constructor- constructor used to make copy of object
// #include<iostream>
// using namespace std;

// class student{
//     private:
//     int roll;

//     public:
//     student(int x){
//         roll = x;
//         cout<<"Rollno: "<<roll<<endl;
//     }

//     student(const student &s){
//         roll=s.roll;
//         cout<<"Copy constructor called"<<endl;
//         cout<<"Rollno from copy constructor: "<<roll<<endl;
//     }

// };

// int main (){
//     student s1(10);
//     student s2=s1;

//     return 0;
// }