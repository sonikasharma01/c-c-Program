#include <iostream>
using namespace std;
#include<conio.h>
int main() {
    int number = 42;
    int *ptr;  // Declare a pointer to an integer

    ptr =
    &number;  // Assign the address of 'number' to the pointer

    cout << "Value of number: " << number << endl;
    cout << "Address of number: " << &number << endl;
    cout << "Value of pointer (address stored): " << ptr << endl;
    cout << "Value pointed to by pointer: " << *ptr << endl;

    getch();
    return 0;
}
