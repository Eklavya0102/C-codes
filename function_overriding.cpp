//This is Run time polymorphism 
// It is an concept in OOPS where a derived(child) class redefins a function that already exists in parent(base) class with same function name and parameter but different in behaviour. 


#include<iostream>
using namespace std;

class dog{
    public:
    void sound(){
        cout<<"Dog barks !!" << endl;
    }
};

class cat:public dog{
    public:
    void sound(){
        cout<<"Cat meow meow !!" << endl;
    }

};

int main (){
    cat c;
    c.sound(); 

    return 0;
}
