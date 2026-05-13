#include<iostream>
using namespace std;

class Number {
public:
    int a;

    // Addition
    Number operator + (Number n) {
        Number temp;
        temp.a = a + n.a;
        return temp;
    }

    // Subtraction
    Number operator - (Number n) {
        Number temp;
        temp.a = a - n.a;
        return temp;
    }

    // Multiplication
    Number operator * (Number n) {
        Number temp;
        temp.a = a * n.a;
        return temp;
    }

    // Division
    Number operator / (Number n) {
        Number temp;
        temp.a = a / n.a;
        return temp;
    }
};

int main() {
    Number n1, n2, result;

    // Pre-assign values
    n1.a = 20;
    n2.a = 10;

    result = n1 + n2;
    cout << "Addition = " << result.a << endl;

    result = n1 - n2;
    cout << "Subtraction = " << result.a << endl;

    result = n1 * n2;
    cout << "Multiplication = " << result.a << endl;

    result = n1 / n2;
    cout << "Division = " << result.a << endl;

    return 0;
}