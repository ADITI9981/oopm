#include<iostream>
using namespace std;
class IT
{
    private:
    int i;
    public:
    IT()
    {
        cout<<"\nENTER i=";
        cin>>i;
    }
    void show()
    {
        cout<<"\nvalue of i: "<<i;
    }
};
int main()
{
    IT obj;
    obj.show();
    return 0;
}
