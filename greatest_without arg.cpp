//program to understand the concept of generic function without arguments and without return type
#include<iostream>
using namespace std;
template <typename t>
void greatest()
{
	t a,b,c;
	cin>>a>>b>>c;
	t x=a;
	t y=b;
	t z=c;
	cout<<"greatest:";
    cout << ((x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z)) << endl;
	}
int main()
{
	greatest<int>();
	return 0;
}
