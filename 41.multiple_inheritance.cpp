#include<iostream>
using namespace std;
#include<conio.h>
class Animal
{
public:
    void eat()
    {
        cout<<"This animals can eat."<<endl;
    }
};
class Bird
{
public:
    void fly()
    {
        cout<<"This birds can fly."<<endl;
    }
};
class Bat :public Animal, public Bird
{
public:
    void sound()
    {
        cout<<"The bat makes a squaeking sound "<<endl;
    }
};

    int main()
{

    Bat b1;
    b1.eat();
    b1.fly();
    b1.sound();
    getch();
    return 0;

}
