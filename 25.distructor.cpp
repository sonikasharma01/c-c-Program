
#include<iostream>
using namespace std;
#include<conio.h>
class Example{
public:
    Example(){
        cout<<"construct called..."<<endl;
    }
    ~Example(){
        cout<<"Distructor called..."<<endl;
    }
};
int main(){

    Example e1;
    getch();
    return 0;
}


