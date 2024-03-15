#include <iostream>
using namespace std;
class akshat{
    public:
    void display(int a){
        cout<<a<<endl;
    }
    void display(int a,int b){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
akshat a;
a.display(2);
a.display(2,3);
} write a program in cpp for operator overloading of the operator '+'