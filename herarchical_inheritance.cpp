#include<iostream>
using namespace std;
class B
{
    protected:
    int a,b;
    public :
    void get()
    {
        cout<<"enter a";
        cin>>a;
        cout<<"enter b";
        cin>>b;
    }
   

};
class D1:public B
{
     public:
        void add()
        {
            cout<<"addition of a and b is"<<a+b<<endl;
        }
};
class D2:public B
{
    
    public:
         void subtract()
        {
            cout<<"subtraction of a and b is"<<a-b;
        }
    
};
int main()
{
    D1 obj1;
    obj1.get();
    obj1.add();
    D2 obj2;
    obj2.get();
    obj2.subtract();
    return 0;

}