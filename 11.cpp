#include <iostream>
using namespace std;

class Const {
public:
    Const() {
        cout << "Constructor has been created" << endl;
    }

    ~Const() {
        cout << "Hello I am Death,Destructor of Worlds" << endl;
    }

    void greet() {
        cout << "Hello" << endl;
    }
};

int main() {
    Const *obj;
    obj = new Const();
    obj->greet();
    delete obj;
    return 0;
} 
