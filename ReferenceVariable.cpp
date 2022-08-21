#include<iostream>
using namespace std;

int main()
{
    int i = 5;

    //reference variable
    int& j = i; 
    i++;
    j++;

    cout << i << endl;
}