#include<iostream>
using namespace std;

class A
{
    public:
    virtual void get()
    {
        cout<<"inside get function of class A"<<endl;
    }

    virtual void display()
    {
        cout<<"inside display function of class A"<<endl;
    }
};

class B :public A
{
    public:
    void get()
    {
         cout<<"inside get function of class B"<<endl;
    }
    

    void display()
    {
          cout<<"inside get function of class B"<<endl;
    }
    
};

int main()
{
    A*p;
    A obj1;
    p=&obj1;
    p->get();
    p->display();
    B obj2;
    p=&obj2;
    p->get();
    p->display();
    return 0;
}