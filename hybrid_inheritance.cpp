#include<iostream>
using namespace std;
class B
{
    public:
      void display()
      {
        cout<<"inside class B "<<endl;
      }
};
class D1:public virtual B
{
    public:
       void display()
    {
        cout<<"inside class D1"<<endl;
    }
};
class D2:public virtual B
{
    public:
       void display()
    {
        cout<<"inside class D2"<<endl;
    }
};
class D:public D1,D2
{
    public:
    void show()
    {
        B::display();
        D1::display();
        D2::display();
        cout<<"inside class D1"<<endl;
    }
};
int main()
{
    D obj;
    obj.show();
    return 0;
}

