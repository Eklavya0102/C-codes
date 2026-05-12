#include <iostream>
using namespace std;

class calculator
{
private:
    float x, y;

public:
    // get numbers from the user
    void get_numbers()
    {
        cout << "Enter the Firs number: ";
        cin >> x;

        cout << "Enter the second number: ";
        cin >> y;
    }

    // the calculations
    void add()
    {
        cout << "The sum of " << x << " and " << y << " = " << x + y << endl;
    }

    void sub()
    {
        cout << "The difference of " << x << " and " << y << " = " << x - y << endl;
    }

    void mul()
    {
        cout << "The multiple of " << x << " and " << y << " = " << x * y << endl;
    }

    void div()
    {
        if (y != 0)
        {
            cout << x << " / " << y << " = " << x / y << endl;
        }
        else
        {
            cout << "div by zero error" << endl;
        }
    }
};

int main()
{
    calculator c;
    c.get_numbers();

    int choise;

    cout<<" \n Press the respective numbers for the respective calculations" << endl;
    cout<<" 1. Add \n 2. Sub \n 3. Div \n 4. Mul" << endl;
    cout<< "\n Enter your choise: ";
    cin>> choise ;

    switch (choise)
    {
    case 1:
        c.add();
        break;
    case 2:
        c.sub();
        break;
    case 3:
        c.div();
        break;

    case 4:
        c.mul();
        break;

    default:
        break;
    }
    return 0;
}