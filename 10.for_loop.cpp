#include<iostream>
using namespace std;
#include<conio.h>
int main(){
    int t;
    cout<<"Which table do you want to print: ";
    cin>>t;
    for(int i=1;i<=10;i++){
        cout<<t<<"*"<<i<<"="<<t*i<<endl;
    }
    getch();
    return 0;
}
