#include<iostream>
using namespace std;
class complex{
    private:
    int real,imag;
    public:
   complex(int r,int i)
   {
     real=r;
     imag=i;
   }

   complex operator=(const complex&c)
   {
    real=c.real;
    imag=c.imag;
   }

   void print()
   {
    cout<<"complex no. is:"<<real<<"+i"<<imag<<endl;
   }
};

int main()
{
   complex c1(3,4), c2(5,6);
   cout<<"before overloading asignment operator "<<endl;
   cout<<"c1 complex number"<<endl;
   c1.print();
   cout<<"c2 complex number"<<endl;
   c2.print();
   cout<<"after overloading assignment operator"<<endl;
   c1=c2;
    cout<<"c1 complex number"<<endl;
   c1.print();
    cout<<"c2 complex number"<<endl;
   c2.print();
   return 0;

}



