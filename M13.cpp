// even numbers in a range

#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    cout << "enter first number :";
    cin >> num1;
    cout << "enter second number :";
    cin >> num2;
    cout << endl
         << "even numbers between " << num1 << " and " << num2 << " are:" << endl;
    for (int i = num1; i <= num2; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}