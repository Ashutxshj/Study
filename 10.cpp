#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Constructor created" << endl;
    }

    ~Test() {
        cout << "Destructor created" << endl;
    }

    void show() {
        cout << "\nHi, how are you?" << endl;
    }
};

int main() {
    Test *obj;
    obj = new Test();
    obj->show();
    delete obj;
    return 0;
} 
