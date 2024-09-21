#include <iostream>
using namespace std;

void art(float x, float y)
{
    cout << "Sum of Numbers is: " << x + y;
    cout << "Subtraction of Numbers is: " << x - y;
    cout << "Multiplication of Numbers is: " << x * y;
    cout << "Division of Number is: " << x / y;
}

void art(float x, float y, float z)
{
    cout << "Sum of Numbers is: " << x + y + z;
    cout << "Subtraction of Numbers is: " << x - y - z;
    cout << "Multiplication of Numbers is: " << x * y * z;
    cout << "Division of Number is: " << x / y / z;
}
int main()
{
    float num1, num2, num3, choice;
    cout << "Choice('1 for Two Operands' or '2 for Three Operands'): ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter Number 1: ";
        cin >> num1;
        cout << "Enter Number 2: ";
        cin >> num2;

        Func(num1, num2);
    }
    else if (choice == 2)
    {
        cout << "Enter Number 1: ";
        cin >> num1;
        cout << "Enter Number 2: ";
        cin >> num2;
        cout << "Enter Number 3: ";
        cin >> num3;

        Func(num1, num2, num3);
    }
    else
    {
        cout << "Invalid Choice!";
    }
}