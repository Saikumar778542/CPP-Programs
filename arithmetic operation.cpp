/*program to undersand the concept of templates to calculate
 arithmetic calculations using template function */
#include<iostream>
using namespace std;
template<typename t1,typename t2>
t1 sum(t1 x,t2 y)
{
	return x+y;
}
template<typename t1,typename t2>
t2 sub(t1 x,t2 y)
{
	return x-y;
}
int main()
{
	cout<<sum<float,int>(3.4,5)<<endl;
	cout<<sub<int,float>(5,6.5)<<endl;
	return 0;
}
