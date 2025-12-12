#include<iostream>
using namespace std;
#include<conio.h>
class Animal{
public:
    void eat(){
    cout<<"animal can eat."<<endl;
    }
};
class Dog: public Animal{
public:
    void bark(){
    cout<<"Dog barks."<<endl;
    }
};
class Cat: public Animal{
public:
    void meow(){
    cout<<"cat meows."<<endl;
    }
};
int main(){

    Dog d;
    Cat c;

    d.eat();
    d.bark();

    c.eat();
    c.meow();

    getch();
    return 0;

}

