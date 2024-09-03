#include<iostream>
using namespace std;
class IT{
    private:
    int i;
    public:
    void get()
    {
        cout<<"enter i"<<endl;
        cin>>i;
    }
    friend void display(IT t);
};

void display(IT t)
{
    cout<<"value of i is:"<<t.i;
}

int main()
{
    IT obj;
    obj.get();
    display(obj);
    return 0;
}