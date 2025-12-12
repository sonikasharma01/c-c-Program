#include<iostream>
using namespace std;
#include<conio.h>
int main(){

    int matrix[2][3]={{1,2,3},{4,5}};
    cout<<"Two dimensional array"<<endl;
    for(int i=0;i<2;i++){
      for(int j=0;j<3;j++){
        cout<<matrix[i][j]<<" ";
      }
      cout<<endl;
    }
    getch();
    return 0;
}
