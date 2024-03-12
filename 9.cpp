#include <iostream>
using namespace std;
class Multi
{
public:
    void add(int a, int b)
    {
        cout << "Addition is: " << a + b << endl;
    }
    void add(int a, int b, int c)
    {
        cout << "Addition is: " << a + b + c << endl;
    }
};
int main(){
    Multi mult;
    mult.add(10,20);
    mult.add(10,20,30);
}