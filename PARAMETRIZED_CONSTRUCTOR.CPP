#include<iostream>
using namespace std;
class IT
{
    private:
    int a;
    public:
    IT(int x)
    {
        a=x;
    }
    void show()
    {
        cout<<"\nvalue of a: "<<a;
    }
};
int main()
{
    IT obj(10);
    obj.show();
    return 0;
}
