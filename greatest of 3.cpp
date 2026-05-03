//print greatest of three numbers using generic function using condition operator
#include<iostream>
using namespace std;
template <typename t1>
t1 great(t1 x,t1 y,t1 z)
{
	return ((x>y)&&(x>z)?x:(y>z)?y:z);
}
int main()
{
	cout<<great<int>(50,30,40)<<endl;
}
