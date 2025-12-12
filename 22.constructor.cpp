#include<iostream>
using namespace std;
#include<conio.h>
class Details{
public:
    Details(){
        string name;
        int year;
        cout<<"enter your Name: ";
        cin>>name;
        cout<<"enter your Year: ";
        cin>>year;
        cout<<"Name: "<<name<<"\nYear: "<<year;
    }
};

int main(){
    Details d1;
    getch();
    return 0;
}
