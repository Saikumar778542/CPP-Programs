//print greatest of 2 numbers using template class
#include<iostream>
using namespace std;
template <class t>
class name
{
    t x, y;
    public:
    t greatest(t a,t b)
    {
        x=a;
        y=b;
        return x>y ? x: y;
    }
    };
int main() {
  name <int>obj;  
  cout<<obj.greatest(5,6);
  return 0;
}
