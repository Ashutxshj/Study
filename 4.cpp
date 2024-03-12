#include <iostream>
using namespace std;
class Grandfather{
    public:
    void house(){
        cout<<"Bungalow"<<endl;
    }
};
class father :public Grandfather
{
public:
    void car()
    {
        cout << "Aston Martin" << endl;
    }
};
class child : public father
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