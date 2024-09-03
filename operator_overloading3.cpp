#include<iostream>
using namespace std;
class IT
{
    private:
    int a;
    public:
        void get()
        {
            cout<<"enter a";
            cin>>a;
        }
    
    
        void  operator++(int)
        {
           a=a+1;
        }
        void show()
        {
           cout<<"\n value of a="<<a<<endl;
        }
        
    
};

int main()
{
    IT o;
    o.get();
    cout<<"\n values before increment";
    o.show();
    o++;
    cout<<"\n values after increment";
    o.show();
    return 0;
}