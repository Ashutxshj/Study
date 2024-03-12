#include <iostream>
using namespace std;
class Test
{
protected:
    int a = 420;
};
class chacha : public Test
{
public:
    void display()
    {
        cout << "Value is " << a;
    }
};
 int main()
{
    chacha obj;
    obj.display();

}