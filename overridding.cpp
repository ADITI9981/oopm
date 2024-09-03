#include<iostream>
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"inside base class"<<endl;
    }
};

class B:public A
{
    public:
    void display()
    {
        cout<<"inside derived class";
    }
};

int main()
{
    B obj;
    obj.display();
    return 0;
}