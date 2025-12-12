
#include <iostream>
using namespace std;
#include<conio.h>
class Student {
public:
    string name;

    void setName(string name) {
        this->name = name;  // 'this' distinguishes member from parameter
    }

    void print() {
        cout << "Name: " << this->name << endl;
    }
};

int main() {
    Student s;
    s.setName("John");
    s.print();  // Output: Name: John
    getch();
    return 0;
}
