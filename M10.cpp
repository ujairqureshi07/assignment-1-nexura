// greatest of four numbers

#include <iostream>
using namespace std;
int main()
{
    int arr[4];
    cout << "enter all four numbers " << endl;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    int a = 0;
    for (int i = 0; i <= 4; i++)
    {
        if (a <= arr[i])
        {
            a = arr[i];
        }
    }
    cout << "the greatest of all four numbers is " << a;
}