#include<iostream>
using namespace std;
#include<conio.h>
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18){
        cout<<"You are eligible to vote.";
    }
    else{
        cout<<"You are not eligible to vote.";
    }
    getch();
    return 0;
}
