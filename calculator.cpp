#include <iostream>
#include <cmath>
using namespace std;
class simple_calculator
{
protected:
    string option;
    float take_number1;
    float take_number2;

public:
    simple_calculator(void)
    {
        take_number1 = 0;
        take_number2 = 0;
    }
    void ask_1()
    {
        cout << "which operation you want to perform" << endl
             << "1.Addition" << endl
             << "2.Subtraction" << endl
             << "3.Multiplication" << endl
             << "4.Division" << endl;
        cin >> option;
    }
    void input_1(void)
    {
        cout << "please enter first number" << endl;
        cin >> take_number1;
        cout << "please enter second number" << endl;
        cin >> take_number2;
    }

    void logic_1()
    {
        if (option == "Addition" || option == "addition" || option == "add" || option == "Add" || option == "1")
        {
            input_1();
            cout << "Sum of " << take_number1 << " and " << take_number2 << " is " << (take_number1 + take_number2) << endl;
        }
        else if (option == "subtraction" || option == "Subtraction" || option == "minus" || option == "Minus" || option == "2")
        {
            input_1();
            cout << "Subtraction of " << take_number1 << " and " << take_number2 << " is " << (take_number1 - take_number2) << endl;
        }
        else if (option == "Multiplication" || option == "multiplication" || option == "multiply" || option == "Multiply" || option == "3")
        {
            input_1();
            cout << "Multiplication of " << take_number1 << " and " << take_number2 << " is " << (take_number1 * take_number2) << endl;
        }
        else if (option == "Division" || option == "division" || option == "divide" || option == "Divide" || option == "4")
        {
            input_1();
            cout << "Division of " << take_number1 << " and " << take_number2 << " is " << (take_number1 / take_number2) << endl;
        }
        else
        {
            cout << "Ops! something went wrong" << endl;
        }
    }
};

class sci_calculator : public simple_calculator
{
public:
    void sci_ask()
    {
        cout << "which operation you want to perform" << endl
             << "1.Square_root" << endl
             << "2.cube_root" << endl
             << "3.hypotenuse" << endl
             << "4.Exponenet's_power" << endl;
        cin >> option;
        if (option == "1" || option == "square_root" || option == "2" || option == "cube_root")
        {
            cout << "Please enter your number" << endl;
            cin >> take_number1;
            if (option == "1" || option == "square_root")
            {
                cout << "Square root of " << take_number1 << " is " << sqrt(take_number1) << endl;
            }
            else if (option == "2" || option == "cube_root")
            {
                cout << "Cube root of " << take_number1 << " is " << cbrt(take_number1) << endl;
            }
        }
        else if (option == "3" || option == "hypotenuse")
        {
            cout << "Please enter base of right angled triangle" << endl;
            cin >> take_number1;
            cout << "Please enter height of right angled triangle" << endl;
            cin >> take_number2;
            cout << "Your hypotenuse with base " << take_number1 << " and with height " << take_number2 << " is " << hypot(take_number1, take_number2) << endl;
        }
        else if (option == "4" || option == "Exponenet's_power" || option == "exponenet's_power")
        {
            cout << "Please enter base of your equation" << endl;
            cin >> take_number1;
            cout << "Please enter exponent of your equation" << endl;
            cin >> take_number2;
            cout << "Your answer with base " << take_number1 << " and with exponent " << take_number2 << " is " << pow(take_number1, take_number2);
        }
        else
        {
            cout << "Ops! something went wrong" << endl;
        }
    }
};
class main_ask : public sci_calculator
{
protected:
    string main_ask_s;

public:
    main_ask()
    {
        cout << "Which calculator you want to use?" << endl;
        cout << "1.Scientific" << endl
             << "2.Simple" << endl;
        cin >> main_ask_s;
        if (main_ask_s == "scientific" || main_ask_s == "Scientific" || main_ask_s == "1")
        {
            sci_ask();
        }
        else if (main_ask_s == "simple" || main_ask_s == "Simple" || main_ask_s == "2")
        {
            ask_1();
            logic_1();
            
        }
        else
        {
            cout << "Ops! something went wrong" << endl;
        }
    }
};

int main()
{
    main_ask first;
    return 0;
    
}
