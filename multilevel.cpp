#include <iostream>
using namespace std;
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;
    public:
    int set_base2int(int a)
    {
        base2int = a;
    }
};
class Drived:public Base1,public Base2
{
    public:
    void show()
    {
        cout<<"The value base1int is="<<base1int<<endl;
        cout<<"The value base1int is="<<base2int<<endl;
        cout<<"The value bsse1int is="<<base1int+base2int<<endl;

    }
};
int main()
{
    Drived sal;
    sal.set_base1int(25);
    sal.set_base2int(10);
    sal.show();
}