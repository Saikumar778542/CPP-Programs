//print arithmetic calculations using calss template and generic class
#include<iostream>
using namespace std;
template <typename t>
class name{
	t x,y;
	public: name()
	{
		x=3.4;
		y=4.5;
	}
	name(t a,t b)
	{
		x=a;
		y=b;
	}
	void sum()
	{
		cout<<x+y<<endl;
	}
	void sub()
	{
		cout<<x-y<<endl;
	}
	void mult()
	{
		cout<<x*y<<endl;
	}
	void div()
	{
		cout<<x/y<<endl;
	}
};
int main()
{
	name <float>obj1;
	name <int>obj2(5,3);
	name <float>obj3(3.4,5.6);
	name <double>obj4(3.65,2.389);
	obj1.sum();
	obj2.sum();
	obj3.sum();
	obj4.sum();
	obj1.sub();
	obj2.sub();
	obj3.sub();
	obj4.sub();
	obj1.mult();
	obj2.mult();
	obj3.mult();
	obj4.mult();
	obj1.div();
	obj2.div();
	obj3.div();
	obj4.div();
	
}
