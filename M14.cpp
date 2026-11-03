//sum of 1 to n

#include <iostream>
using namespace std;
int main()
{
    int num, a = 0;
    cout << "enter number : " << endl;
    cin >> num;
    cout << "sum of 1 to " << num << " is " << endl;
    for (int i = 0; i <= num; i++)
    {
        a += i;
    }
    cout << a;
}