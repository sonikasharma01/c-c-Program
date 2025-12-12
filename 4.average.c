#include<stdio.h>
#include<conio.h>

void avg(){
    int a,b;
    float result;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    result=(a+b)/2;
    printf("The average of two numbers is %f",result);
}
int main(){

    avg();
    getch();
    return 0;
}
