#include<iostream>
using namespace std;
int area(int x);
int area(int x, int y);
double area(float x,double y);
int main()
{
    float base;
    int l,b,r;
    double h;
    cout<<"enter the radius of a circle";
    cin>>r;
    cout<<"area of a circle is :"<<area(r)<<endl;;
    cout<<"enter the length of a rectangle";
    cin>>l;
    cout<<"enter the breadth of a rectangle";
    cin>>b;
    cout<<"area of a rectangle is :"<<area(l,b)<<endl;;
    cout<<"enter the base of a triangle";
    cin>>base;
    cout<<"enter the height of a triangle";
    cin>>h;
    cout<<"area of a triangle is :"<<area(base,h);
   return 0;
}
int area(int x)
{
    return 3.14*x*x;
}
int area(int x, int y)
{
    return x*y;
}
double area(float x,double y)
{
    return 0.5*x*y;
}
