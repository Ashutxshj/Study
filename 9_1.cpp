#include <iostream>
using namespace std;
class Multi
{
public:
    void change(int a)
    {
        cout << "the value is: " << a << endl;
    }
    void change(float a)
    {
        cout << "the value is: " << a << endl;
    }
    void change(char a)
    {
        cout << "the value is: " << a << endl;
    }
};
int main()
{
    Multi mult;
    mult.change(10);
    mult.change("a");
    mult.change(3.5f);
}