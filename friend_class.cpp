#include<iostream>
using namespace std;
class A
{
    private:
    int i;
    public:
    void get()
    {
       cout<<"enter i";
       cin>>i;
    }
    friend class B;
};

class B
{
    public:
    void display(A t)
    {
        cout<<"value of i is:"<<t.i;
    }
};

int main()
{
    A obj1;
    B obj2;
    obj1.get();
    obj2.display(obj1);
    return 0;
}