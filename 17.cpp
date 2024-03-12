#include <iostream>
using namespace std;
class MyObject {
public:
    MyObject(int value) : value(value) {}

    int getValue() {
        return value;
    }

private:
    int value;
};

int main() {
    const int n = 5;
    MyObject o[n] = {MyObject(1), MyObject(2), MyObject(3), MyObject(4), MyObject(5)};

    for (int i = 0; i < n; i++) {
        cout << "Object " << i << " has a value of: " << o[i].getValue() <<endl;
    }

    return 0;
}