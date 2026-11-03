// largest of two numbers

#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    cout << "enter first number " << endl;
    cin >> num1;
    cout << "enter second number " << endl;
    cin >> num2;
    if (num1 == num2)
    {
        cout << "both are equal numbers" << endl;
    }

    else if (num1 > num2)
    {
        cout << "first number " << num1 << " is greater than second number " << num2 << endl;
    }
    else
    {
        cout << "second number " << num2 << " is " << "greater than first number " << num1 << endl;
    }
}