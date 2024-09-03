#include<iostream>
using namespace std;
class IT
{
  private:
  int a,b;
  public:
  IT()
  {
    cout<<"constructor without parameter"<<endl;
  }
  IT(int x)
  {
     a=x;
    cout<<"the value of a ="<<a<<endl;
    cout<<"the constructor with one parameter"<<endl;
  }
  IT(int x,int y)
  {
    a=x;
    b=y;
    cout<<"the value of a ="<<a<<endl;
    cout<<"the value of b ="<<b<<endl;
    cout<<"the constructor with two parameter"<<endl;   
  }
};
int main()
{
    IT obj1(), obj2(2), obj3(3,4);
    return 0;
}