#include<iostream>
using namespace std;
#include<conio.h>
class Car{
public:
    void brand(){
    cout<<"Brand: Toyota"<<endl;
    }
    void fuel_type(){
    cout<<"fuel type: Diesel"<<endl;
    }
};
class Car1:public Car{
public:
    void start(){
        cout<<"car started..."<<endl;
    }
};
class Car2:public Car1{
public:
    void stop(){
    cout<<"car stopped..."<<endl;
    }
};
int main(){

   Car2 c2;
   c2.brand();
   c2.fuel_type();
   c2.start();
   c2.stop();
    getch();
return 0;
}

