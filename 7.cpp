//Write a Program to Find ASCII Value of a Character

#include<iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "ASCII Value of " << c << " is " << int(c);
    return 0;
}