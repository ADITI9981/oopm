#include<iostream>
using namespace std;
class IT
{
    private :
    int i;
    public :
    IT(int x)
    {
        i=x;
    }
    IT(IT &t)
    {
        i=t.i;
    }
    void show()
    {
        cout<<"value of i is ="<<i<<endl;
    }
};
int main()
{
  IT obj(4);
  obj.show();
  return 0;
}