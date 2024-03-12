#include <iostream>
using namespace std;
class Parent1{
    public:
    void house(){
        cout<<"Bungalow"<<endl;
    }
};
class Parent2
{
public:
    void car()
    {
        cout << "Aston Martin" << endl;
    }
};
class child : public Parent1, public Parent2
{
public:
    void Cycle()
    {
        cout << "Hero" << endl;
    }
};
int main()
{
    child obj;
    obj.car();
    obj.Cycle();
    obj.house();
}