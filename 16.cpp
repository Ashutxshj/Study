#include <iostream>
using namespace std;
class One
{
public:
    void Movie()
    {
        cout << "Jhoome Jo Pathaan";
    }
};
int main()
{
    One *obj = new One();
    obj->Movie();
    return 0;
} write a program for array of objects in cpp