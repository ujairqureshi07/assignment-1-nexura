// celsius to fahrenheit

#include <iostream>
using namespace std;
int main()
{
    float C;
    cout << "enter temprature in celsius " << endl;
    cin >> C;
    float F;
    F = ((9.0 / 5.0) * C) + 32;
    cout << "temprature in fahrenheit is " << F << endl;
}