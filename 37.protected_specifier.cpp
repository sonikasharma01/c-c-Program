#include <iostream>
using namespace std;
#include<conio.h>
class A {
protected:
    int x = 5;
};

class B {
protected:
    int y = 10;
};

class C : public A, public B {
public:
    void sum() {
        cout << "Sum: " << x + y;  // Can access protected from both parents
    }
};

int main() {
    C obj;
    obj.sum();

    getch();
    return 0;
}
