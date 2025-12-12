#include<stdio.h>
#include<conio.h>
void circle(){
    float pie = 3.14;
    float r, result;

    printf("Enter a Radius: ");
    scanf("%f", &r);

    result = pie * r * r;
    printf("Area of circle is: %f", result);
}

int main(){
    circle();
    getch();
    return 0;
}
