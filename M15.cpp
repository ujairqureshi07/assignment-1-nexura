// factorial using a loop

#include <iostream>
using namespace std;
int main()
{
    int num, a = 1;
    cout << "enter number :" << endl;
    cin >> num;
    cout << "factorial of " << num << " is ";
    for (int i = 1; i <= num; i++)
    {
        a = a * i;
    }
    cout << a;
}