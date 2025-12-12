#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int a[50],r,sum=0;
    cout<<"Enter a range:";
    cin>>r;
    cout<<"Enter "<<r<<" elements: "<<endl;
    for(int i=0; i<r; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<r; i++)
    {
        sum=sum+a[i];
    }
    cout<<"Addition of elements in array: "<<sum;
    getch();
    return 0;
}
