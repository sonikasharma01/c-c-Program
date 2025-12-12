#include <stdio.h>

int main() {
    char op;
    int a, b;

    printf("Enter operation : ");
    scanf("%c", &op);
    printf("enter a number: ");
    scanf("%d",&a);
    printf("enter a number: ");
    scanf("%d",&b);
    switch(op) {
        case '+': printf("%d", a + b); break;
        case '-': printf("%d", a - b); break;
        case '*': printf("%d", a * b); break;
        case '/': printf("%d", a / b); break;
        default: printf("Invalid");
    }

    return 0;
}
