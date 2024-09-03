#include<iostream>
using namespace std;
class IT
{
    private:
    int a,b,c,d;
    public:
    
        IT(int x,int y,int z,int s)
        {
           a=x;
           b=y;
           c=z;
           d=s;
        }
        void operator++(int);
        void show()
        {
            cout<<"\n value of a="<<a<<"\nvalue of b="<<b<<"\nvalue of c="<<c<<"\nvalue of d="<<d<<endl;
        }
        //10
    
};
void IT::operator++(int)
{
   a++;
   b++;
   c++;
   d++;
};

int main()
{
    IT obj(1,2,3,4);
    cout<<"\n values before increment";
    obj.show();
    cout<<"\n values after increment";
    obj++;
    obj.show();
    return 0;
}