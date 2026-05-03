//program to understand the concept of generic function with arguments and without return type
#include<iostream>
using namespace std;
template <typename t>
void greatest(t x,t y,t z)
{
	cout<< ((x>y) ? ((x>z) ? x:z) : ((y>z) ? y:z))<<endl;
}
int main()
{
	greatest<int>(20,15,8);
	greatest(3.54,1.23,7.96);
	return 0;
}
