
#include<iostream>
#include<conio.h>
using namespace std;
class Detail{
private:
    string name;
public:
    void setname(string n){
        name=n;
    }
    string getname(){
        return name;
    }
};
int main(){

    Detail d1;
    d1.setname("Tony");
    cout << d1.getname();
    getch();
    return 0;
}
