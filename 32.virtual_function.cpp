#include <iostream>
using namespace std;
#include<conio.h>
class Base{
public:
    virtual void show(){
        cout<<"Base class"<<endl;
    }
};

class Derived : public Base {
public:
    void show() override{
        cout<<"derived class"<<endl;
    }
};

int main(){

    Base* ptr;
    Derived d;

    ptr=&d;
    ptr->show();

    getch();
    return 0;
}
