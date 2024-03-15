#include <iostream>
#include <fstream>
using namespace std;
int main()
{
        ofstream obj("ggi.txt");
        obj << "Hello Sir I like cpp very much";
        cout<<"Done"<<endl;
        obj.close();
}