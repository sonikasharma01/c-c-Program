#include<iostream>
using namespace std;
#include<conio.h>
int main(){

    int first,second;
    cout<<"Enter first number: ";
    cin>>first;
    cout<<"Enter second number: ";
    cin>>second;
    if (first>second){
        cout<<"first is greater.";
    }
    else if(second>first){
        cout<<"second is greater.";
    }
    else{
        cout<<"first and second both are equal.";
    }
    getch();
    return 0;
}
