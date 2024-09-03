#include<iostream>
using namespace std;
class complex
{
    float real,imag;
    public:
    void get()
    {
        cout<<"enter real";
        cin>>real;
        cout<<"enter imag";
        cin>>imag;
    }

    // complex operator+(complex obj)
    // {
    //      complex temp;
    //      temp.real=real+obj.real;
    //      temp.imag=imag+obj.imag;
    //      return temp;
    // }

    complex operator-(complex obj)
    {
        complex temp;
        temp.real=real-obj.real;
        temp.imag=imag-obj.imag;
        return temp;
    }

    // complex operator*(complex obj)
    // {
    //     complex temp;
    //     temp.real=real*obj.real;
    //     temp.imag=imag*obj.imag;
    //     return temp;
    // }

    void display()
    {
      if(imag<0)
      {
        cout<<"the output is:"<<real<<imag<<"i"<<endl;
      }
      else{
        cout<<"the output is:"<<real<<"-"<<imag<<"i"<<endl;
      }
    }
};

int main()
{
    complex c1,c2,c3;
    c1.get();
    c2.get();
    c3=c1-c2;
    c3.display();
    return 0;
}