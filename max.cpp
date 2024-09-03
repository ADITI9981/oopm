#include<iostream>
#include<cstring>
using namespace std;
int max(int,int);
long max(long,long);
string max(string,string);
int main()
{
    string s;
    cout<<max(23,56)<<endl;
    cout<<max(18.3,18.9)<<endl;
    cout<<s.max("physics","mathematics");
    return 0;
}

int max(int n1,int n2)
{
    if(n1>n2)
       return n1;
    else
       return n2;
}

long max(long num1,long num2)
{
    if(num1>num2)
    
        return num1;
    else
        return num2;
    
}

string max(string &str1,string &str2)
{
    int l1=strlen (str1);
    int l2=strlen (str2);
    if(str1>str2)
        return str1;
    else  
        return str2;
}
