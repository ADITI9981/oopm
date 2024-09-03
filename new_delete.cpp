#include<iostream>
using namespace std;

int main()
{
    int*p;
    int n;
    p=new int[n];
    cout<<"enter the number of element:";
    cin>>n;

    if(n==0)
    {
        cout<<"memmory allocation failure";
    }

    else
    {
       for(int i=0;i<n;i++)
       {
        cout<<"enter the element "<<endl;
        cin>>p[i];
       }

       for(int i=0;i<n;i++)
       {
        cout<<"the array is :"<<p[i];
       }
       delete[]p;
    }
    return 0;

}