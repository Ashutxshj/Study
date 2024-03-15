#include <iostream>
using namespace std;
class Box {
    double length;
    double width;
    double height;
public:
    Box(double l, double w, double h) : length(l), width(w), height(h) {}

    Box operator+(const Box& b) {
        Box result(length + b.length, width + b.width, height + b.height);
        return result;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << ", Height: " << height << endl;
    }
};
int main() {
    Box box1(3.0, 4.0, 5.0);
    Box box2(1.0, 2.0, 3.0);

    Box result = box1 + box2;

    cout << "Box 1: ";
    box1.display();

    cout << "Box 2: ";
    box2.display();

    cout << "Box 1 + Box 2: ";
    result.display();

    return 0;
}