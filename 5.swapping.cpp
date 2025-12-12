#include<iostream>
using namespace std;
#include<conio.h>
int main(){
    int a,b,temp;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping.."<<endl;
    cout<<"your first number is "<<a<<endl;
    cout<<"your second number is "<<b<<endl;
    getch();
    return 0;

}
