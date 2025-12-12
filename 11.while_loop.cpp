#include<iostream>
using namespace std;
#include<conio.h>
int main(){
    int a[9]={8,3,9,21,16,1,7,5,0},i=0,temp;
    cout<<"After sorting:"<<endl;
    while(i<9){
        int j=0;
        while(j<9-i){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
            j++;
        }
        i++;
    }
    i=0;
    while(i<9){
    cout<<a[i]<<" ";
    i++;
    }
    getch();
    return 0;
}
