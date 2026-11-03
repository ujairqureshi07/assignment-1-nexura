// multiplication table

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter number : " << endl;
    cin >> num;
    cout << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " X " << i << " = " << num * i << endl;
    }
}