#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 0, c;
    try
    {
        if (b == 0)
        {
            throw 0;
        }
        else
            c = a / b;
        cout << "Value of c is" << c;
        throw 'a';
    }
    catch (int x)
    {
        cout << "exception caught";
    }
    catch (...)
    {
        cout << "default exception";
        009
    }
}