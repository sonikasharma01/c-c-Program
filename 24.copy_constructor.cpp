#include <iostream>
using namespace std;
#include<conio.h>
class Student {
public:
    string name;
    int age;

    // Copy constructor
    Student(const Student &other) {
        name = other.name;
        age = other.age;
        cout << "Copied!" << endl;
    }

    Student(string n, int a) : name(n), age(a) {}
};

int main() {
    Student s1("John", 20);
    Student s2 = s1;  // Copy constructor called
    getch();
    return 0;
}
