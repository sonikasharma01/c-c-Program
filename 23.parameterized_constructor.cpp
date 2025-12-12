#include<iostream>
using namespace std;
#include<conio.h>
class Add{
public:
    Add(int x,int y){
    int z=x+y;
    cout<<z;
    }
};
int main(){

    Add a(3,3);
    getch();
    return 0;
}
