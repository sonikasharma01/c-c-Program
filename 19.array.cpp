#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    int a[5];
    cout<<"enter 5 numbers: ";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"array:"<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
