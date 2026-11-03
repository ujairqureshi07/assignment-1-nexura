// range of leap year

#include <iostream>
using namespace std;
int main()
{
    int Syear, Eyear;
    cout << "enter starting year " << endl;
    cin >> Syear;
    cout << "enter ending year " << endl;
    cin >> Eyear;
    cout << endl;

    for (int i = Syear; i <= Eyear; i++)
    {
        if (i % 4 == 0)
        {
            cout << i << endl;
        }
    }
}