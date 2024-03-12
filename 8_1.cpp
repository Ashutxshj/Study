#include<iostream>
using namespace std;

class Employee {
public:
    int salary;
    string name;

    void insertDetail(string a, int b) {
        salary = b;
        name = a;
    }

    void display() {
        cout << "The name of the employee " << name << " salary is Rs " << salary;
    }
};
int main() {
    Employee obj[10];

    for (int i = 0; i < 10; i++) {
        int sal;
        string nm;

        cout << "Enter the name of employee and salary: ";
        cin >> nm >> sal;

        obj[i].insertDetail(nm, sal);
        obj[i].display();
        cout << endl;
    }

    return 0;
}