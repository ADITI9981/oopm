#include<iostream>
using namespace std;
class A1
{
    protected:
    int a;
   

};
class A2
{
     protected :
     int b;



};
class B:public A1,A2
{
     public:
    
        void get()
        {
            cout<<"enter a";
            cin>>a;
            cout<<"enter b";
            cin>>b;
        }
    public:
        void show()
        {
            cout<<"value of a is"<<a;
            cout<<"\nvalue of b is"<<b;
        }
    
};
int main()
{
    B obj;
    obj.get();
    obj.show();
    return 0;

}