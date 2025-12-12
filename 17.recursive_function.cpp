#include<iostream>
using namespace std;
#include<conio.h>

int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    else{

        return n*fact(n-1);
    }
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = fact(num);
    cout << "Factorial of " << num << " is: " << result;

    getch();
    return 0;
}
