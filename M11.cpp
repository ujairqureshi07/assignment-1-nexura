//menu driven calculator 

#include <iostream>
using namespace std;
int main()
{
    int choice;
    float num1, num2;
    cout << "what operation did you want to perform" << endl
         << "1. Addition" << endl
         << "2. Substraction" << endl
         << "3. Multiplication" << endl
         << "4. Division" << endl
         << endl
         << "type any (1,2,3,4):" << endl;
    cin >> choice;
    if (choice == 1)
    {
        cout << endl
             << "enter first number " << endl;
        cin >> num1;
        cout << endl
             << "enter second number " << endl;
        cin >> num2;
        float sum = num1 + num2;
        cout << "sum of two numbers is " << sum;
    }
    else if (choice == 2)
    {
        cout << endl
             << "enter first number " << endl;
        cin >> num1;
        cout << endl
             << "enter second number " << endl;
        cin >> num2;
        float substraction = num1 - num2;
        cout << "substraction of " << num2 << " from " << num1 << " is" << substraction;
    }
    else if (choice == 3)
    {
        cout << endl
             << "enter first number " << endl;
        cin >> num1;
        cout << endl
             << "enter second number " << endl;
        cin >> num2;
        float multiplication = num1 * num2;
        cout << "multiplication of two numbers is " << multiplication;
    }
    else if (choice == 4)
    {
        cout << endl
             << "enter first number " << endl;
        cin >> num1;
        cout << endl
             << "enter second number " << endl;
        cin >> num2;
        if (num2 == 0)
        {
            cout << "division by zero is not possible";
        }
        else
        {
            float division = num1 / num2;
            cout << "division of " << num1 << " by " << num2 << " is " << division;
        }
    }
    else
    {
        cout << "choose in the given choices ";
    }
}