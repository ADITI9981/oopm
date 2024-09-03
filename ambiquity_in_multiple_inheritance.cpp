#include<iostream>
using namespace std;
class A1
{
    protected:
    int a;
    public:
    void get()
    {
        cout<<"enter a";
        cin>>a;
    }
   

};
class A2
{
     protected :
     int b;
     void get()
    {
        cout<<"enter b";
        cin>>b;
    }
   



};
class B:public A1,A2
{

    public:
       
        void show()
        {
             A1::get();
             A2::get();
            cout<<"value of a is"<<a;
            cout<<"\nvalue of b is"<<b;
        }
    
};
int main()
{
    B obj;
    obj.show();
    return 0;

}