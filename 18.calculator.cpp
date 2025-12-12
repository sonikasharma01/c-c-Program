#include<iostream>
using namespace std;
#include<conio.h>
void add(){
    int a,b,r;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    r=a+b;
    cout<<"Addition of two number is "<<r<<endl;
}
void sub(){
     int a,b,r;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    r=a-b;
    cout<<"Subtraction of two number is "<<r<<endl;
}
void multi(){
    int a,b,r;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    r=a*b;
    cout<<"Multiplication of two number is "<<r<<endl;
}
void div(){
    float a,b,r;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    r=a/b;
    cout<<"Division of two number is "<<r<<endl;
}
void avg(){
     float a,b,r;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    r=(a+b)/2;
    cout<<"Average of two number is "<<r<<endl;
}
int main(){
    int operation;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Average"<<endl;
    cout<<"6. Exit"<<endl;

    while(1){
         cout<<"Enter your choice: ";
         cin>>operation;

        switch(operation){
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            multi();
            break;
        case 4:
            div();
            break;
        case 5:
            avg();
            break;
        case 6:
            exit(0);
        default:
            cout<<"invalide choice."<<endl;
        }
    }
    getch();
    return 0;
}
