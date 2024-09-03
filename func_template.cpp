#include<iostream>
using namespace std;
template<class t>
t Max(t x,t y)
{
    if(x>y)
    {
        cout<<"xis max";
    }
    else{
        cout<<"y is max";
    }
}

int main()
{
    cout<<"the max of 23 and 24 :"<<max(23,24);
    cout<<"the max of 2.3 and2.6 "<<max(2.3,2.6);
    return 0;
}