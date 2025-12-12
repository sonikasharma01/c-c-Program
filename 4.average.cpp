#include<iostream>
using namespace std;
#include<conio.h>
void avg(){
    int a,b;
    float result;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    result=(a+b)/2;
    cout<<"The average of two numbers is "<<result;
}
int main(){

    avg();
    getch();
    return 0;
}
