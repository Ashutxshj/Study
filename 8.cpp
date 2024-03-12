#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int employeeId;
    double salary;
public:
    Employee(string n, int id, double s) : name(n), employeeId(id), salary(s) {}

    void getDetails() {
        cout << "Enter employee name: ";
        getline(cin, name);

        cout << "Enter employee ID: ";
        cin >> employeeId;

        cout << "Enter employee salary: ";
        cin >> salary;
    }
    void displayDetails() {
        cout << "Employee Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee employee1("Ashutosh", 42, 100000.0);

    employee1.displayDetails();

    Employee employee2("", 0, 0.0);
    employee2.getDetails();

    employee2.displayDetails();

    return 0;
}