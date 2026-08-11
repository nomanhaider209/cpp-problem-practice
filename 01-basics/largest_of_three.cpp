/*
Problem:
Find the largest among three numbers.

Approach:
Compare the three numbers using conditional statements
and determine which one is the largest.

Concepts Used:
- if/else
- comparison operators
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        cout << "Largest number = " << a;
    }
    else if (b >= a && b >= c)
    {
        cout << "Largest number = " << b;
    }
    else
    {
        cout << "Largest number = " << c;
    }

    return 0;
}
