#include<iostream>
#include<typeinfo>
using namespace std;

class A
{
    private:
    int i;
    char c;
    float f;
    double d;
    public :
    void show()
    {
        cout<<"the type of variable i:"<<typeid(i).name()<<endl;
        cout<<"the type of variable c:"<<typeid(c).name()<<endl;
        cout<<"the type of variable f:"<<typeid(f).name()<<endl;
        cout<<"the type of variable d:"<<typeid(d).name()<<endl;
    }
};

int main()
{
    A obj;
    obj.show();
    return 0;
}

