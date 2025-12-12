#include<iostream>
using namespace std;
#include<conio.h>
void circle(){
    float pie=3.14,r,result;
    cout<<"Enter a Radius: ";
    cin>>r;
    result=pie*r*r;

    cout<<"Area of circle is: "<<result<<endl;

}
int main(){

    circle();
    getch();
    return 0;
}
