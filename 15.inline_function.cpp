#include<iostream>
using namespace std;
#include<conio.h>

inline float square(){
    float side;
    cout<<"Enter side of square: ";
    cin>>side;
    return side * side;
}


int main(){

    float result = square();
    cout<<"Area of square is: "<<result<<endl;
    getch();
    return 0;
}
