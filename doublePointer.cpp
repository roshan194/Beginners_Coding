#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int* p = &i;
    int** p2 = &p;

    cout << "1st " << i << endl;
    cout << "2nd " << *p << endl;
    cout << "3rd " << **p2 << endl;

    cout << &i <<endl; 
    cout << p << endl;
    cout << *p2 << endl;

    return 0; 
}