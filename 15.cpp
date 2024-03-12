#include <iostream>

class Base1 {
public:
    void display1() {
        std::cout << "This is Class 1" << std::endl;
    }
};
class Base2 {
public:
    void display2() {
        std::cout << "This is Class 2" << std::endl;
    }
};
class Derived : public Base1, public Base2 {
public:
    void displayDerived() {
        std::cout << "This is Class 3" << std::endl;
    }
};
int main() {
    Derived d;
    d.display1();
    d.display2();
    d.displayDerived();

    return 0;
} write a dynamic object program in cpp oops