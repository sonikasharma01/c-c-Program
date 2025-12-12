#include<iostream>
using namespace std;
#include<conio.h>

class Example{
public:
    int a;
    void add(Example E){
        a=a+E.a;
    }
};
int main(){
    Example e1,e2;
    e1.a=50;
    e2.a=100;
    cout<<"Initial value."<<endl;
    cout<<"value of object1: "<<e1.a<<"\nobject2: "<<e2.a<<endl;

    e2.add(e1);
    cout<<"New value."<<endl;
    cout<<"value of object1: "<<e1.a<<"\nobject2: "<<e2.a<<endl;

    getch();
    return 0;
}
