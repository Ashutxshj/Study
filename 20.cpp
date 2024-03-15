// C++ Program to Demonstrate
// Operator Overloading
#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;
	Complex(int r = 0, int i = 0)
	{
		real = r;
		imag = i;
	}
	Complex operator+(Complex const& obj)
	{
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	void print() { cout << real << " + i" << imag << '\n';}
};

int main()
{
	Complex c1(2, 3), c2(3, 4);
	Complex c3 = c1 + c2;
	c3.print();
} write a program to write text inside the file in __cpp_aggregate_bases
