#include<iostream>
using namespace std;

class A
{
	private:
		A() {};
		static A* p;
	public:
		static A* singleGet();
};
A* A::p = new A();
A* A::signalGet()
{
	return p;
}

class A
{
	private:
		A() {};
		static A a;
		
}