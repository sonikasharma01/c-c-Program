#include<iostream>
using namespace std;
#include<conio.h>
void rectangle(){
    int l,b,result;
    cout<<"Enter a length: ";
    cin>>l;
    cout<<"Enter a breath: ";
    cin>>b;
    result=l*b;
    cout<<"Area of ractangle is: "<<result<<endl;
}
int main(){

    rectangle();
    getch();
    return 0;
}
