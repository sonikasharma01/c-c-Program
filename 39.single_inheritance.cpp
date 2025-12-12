#include<iostream>
using namespace std;
#include<conio.h>
class Car{
public:
    void start(){
        cout<<"car started..."<<endl;
    }
};
class Car1 : public Car{
public:
    void stop(){
    cout<<"car stopped..."<<endl;
    }
};
int main(){

    Car1 c1;
    c1.start();
    c1.stop();
    getch();
    return 0;
}
