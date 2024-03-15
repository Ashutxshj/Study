#include <iostream>
using namespace std;
class A
{
private:
    int a;

protected:
    int b;

public:
    A()
    {
        a = 10;
        b = 20;
    }
    friend class B;
};
class B
{
public:
    void display(A obj)
    {
        cout << "value is " << obj.a << endl;
        cout << "value is " << obj.b << endl;
    }
};
int main()
{
    A obj1;
    B obj2;
    obj2.display(obj1);
    // cout<<obj1.a;
    return 0;
}