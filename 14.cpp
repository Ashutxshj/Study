#include <iostream>
using namespace std;
class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};
class Labrador : public Dog {
public:
    void play() {
        cout << "Labrador is playing" << endl;
    }
};
int main() {
    Labrador l;
    
    l.eat();
    l.bark();
    l.play(); 

    return 0;
} write a program for multiple inheritance in cpp