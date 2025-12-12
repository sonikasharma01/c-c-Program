#include<iostream>
#include<conio.h>
using namespace std;
class Demo2;
class Demo1{
public:
    virtual void show(){
    cout<<"parent class."<<endl;
   }
};
class Demo2 : public Demo1{
public:
    void show(){
        cout<<"child class."<<endl;
    }
};
int main(){
    Demo1 *d1;
    Demo2 d2;
    d1=&d2;
    d1->show();
    getch();
    return 0;
}
