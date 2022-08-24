// Below I have shared C++ program to check whether a given character is an uppercase or lowercase alphabet, a digit or a special character. First of all I read a character an then compare it with ASCII values given below.

// Uppercase Alphabet: 65-90
// Lowercase Alphabet: 97-122
// Digit: 48-57
// If ASCII value of character is other then the values mentioned above then it is a special character.

#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Enter any character: ";
    cin >> ch;

    if (ch >= 65 && ch <= 90)
        cout << endl
             << "You entered an uppercase character";
    else if (ch >= 48 && ch <= 57)
        cout << endl
             << "You entered a digit";
    else if (ch >= 97 && ch <= 122)
        cout << endl
             << "You entered a lowercase character";
    else
        cout << endl
             << "You entered a special character";
    return 0;
}
