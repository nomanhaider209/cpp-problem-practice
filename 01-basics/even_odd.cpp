/*
Problem:
Check whether a given number is even or odd.

Approach:
If the number is divisible by 2, it is even.
Otherwise, it is odd.

Concepts Used:
- if/else
- modulus operator
*/
#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}
