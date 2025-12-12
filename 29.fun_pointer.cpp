// function as a pointer
#include<iostream>
using namespace std;
#include<conio.h>
int add(int a, int b){
    return a+b;
}

int main(){
    int result;
    int (*ptr)(int,int)=add;
    result=ptr(30,20);
    cout<<result;

    getch();
    return  0;
}
