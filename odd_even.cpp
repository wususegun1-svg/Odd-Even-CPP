#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << number << " is an Even number.";
    }
    else
    {
        cout << number << " is an Odd number.";
    }

    return 0;
}
