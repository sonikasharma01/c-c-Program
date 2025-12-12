#include <iostream>
using namespace std;
#include<conio.h>
int main() {
    int num;
    cout<<"Enter a number:";
    cin>>num;
    if (num > 0) {
        if (num % 2 == 0) {
            cout << "Positive and Even";
        } else {
            cout << "Positive and Odd";
        }
    } else {
        cout << "Not Positive";
    }
    getch();
    return 0;
}
