#include <iostream>
using namespace std;
class person{
    public:
    person()
    {
        cout<<"Constructor Called"<<endl;
    }
    ~person(){
        cout<<"Now I have become Death,Destructor of worlds."<<endl;
    }
    person(int a,int b){
        cout<<"The values are: "<<a<<" "<<b<<endl;
    }
};
int main()
{
    person obj1;
    person obj2(2,3);
    return 0;
} 