#include<iostream>
#include<conio.h>
using namespace std;
class Show{
public:
    void fun1(){
        cout<<"public specifier.";
    }
};

int main(){

    Show s1;
    s1.fun1();

    getch();
    return 0;
}
