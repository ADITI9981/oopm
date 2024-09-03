#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
     public:
    
        void get1()
        {
            cout<<"enter a";
            cin>>a;
           
        }
   

};
class B:public A
{
     protected :
     int b;
      public:
    
        void get2()
        {
            cout<<"enter b";
            cin>>b;
        }



};
class C:public B
{
    
    public:
        void show()
        {
            cout<<"value of a is"<<a;
            cout<<"\nvalue of b is"<<b;
        }
    
};
int main()
{
    C obj;
    obj.get1();
    obj.get2();
    obj.show();
    return 0;
}
