#include <iostream>
using namespace std;
// ! Object Creation
class person{
    public:
    void mymethod(){
        int a=2;
        int b=3;
        int c=a+b;
        cout<<"The sum is: "<<c<<endl;
    }
        // int age;
        // string name;
};
int main(){
    person obj;
    // obj.age =100;
    // obj.name = "Hero";
    // cout<<"Age is:"<<obj.age<<endl;
    // cout<<"Your name is: "<<obj.name<<endl;
    obj.mymethod();
    return 0;
}