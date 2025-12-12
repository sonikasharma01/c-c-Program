#include<iostream>
using namespace std;
#include<conio.h>
class Sum{
public:
    void add(int a,int b){
        int result=a+b;
        cout<<result<<endl;
    }
    void add(int a,int b,int c){
        int result=a+b+c;
        cout<<result<<endl;
    }
};
int main(){

    Sum s1;
    s1.add(2,5);
    s1.add(6,9,7);
    getch();
    return 0;
}
