
#include<iostream>
using namespace std;
#include<conio.h>
class Sum{
public:
    void add(int a,int b){
    cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    }
};

class Subtract: public Sum{
public:
    void sub(int a,int b){
     cout<<"subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
    }
};

class Multiply: public Sum{
public:
    void multi(int a,int b){
    cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
    }
};
class Divide :public Subtract,public Multiply{
public:
    void div(float a,float b){
    cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
    }
};
int main(){

    Subtract s;
    Multiply m;
    Divide d;

    s.add(2,3);
    s.sub(4,2);

    m.add(5,9);
    m.multi(9,3);

    d.multi(8,5);
    d.sub(9,3);
    d.div(10,2);

    getch();
    return 0;
}


