#include <iostream>
#include <string>

using namespace std;

class Calculator
{
private:
    double a, b;
    string operation;

public:
    Calculator(double x, double y, string op)
    {
        a = x;
        b = y;
        operation = op;
    }

    void compute()
    {
        if (operation == "add")
        {
            cout << "Result: " << (a + b) << endl;
        }
        else if (operation == "subtract")
        {
            cout << "Result: " << (a - b) << endl;
        }
        else if (operation == "multiply")
        {
            cout << "Result: " << (a * b) << endl;
        }
        else if (operation == "divide")
        {
            if (b != 0)
            {
                cout << "Result: " << (a / b) << endl;
            }
            else
            {
                cout << "Error: Division by zero!" << endl;
            }
        }
        else
        {
            cout << "Invalid operation. Please use add, subtract, multiply or divide." << endl;
        }
    }
};

int main()
{
    double num1, num2;
    string op;

    cout << "Enter first number (a): ";
    cin >> num1;

    cout << "Enter second number (b): ";
    cin >> num2;

    cout << "Enter operation type (add, subtract, multiply, divide): ";
    cin >> op;

    Calculator calc(num1, num2, op);
    calc.compute();

    return 0;
}
