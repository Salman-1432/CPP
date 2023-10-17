// static data members of  classes in c++
// ans :they attributes or class memebers or class field:
#include<iostream>
using namespace std;
class Base
{
    public:
    int x;// normal data members is not create outside the type of value

    static int y;// declartion part// static vreable you define
};
int Base::y;//  defination part of the static
int main()
{
    Base b1;
    b1.x=10;
    b1.y=30;


    Base b2;
    b2.x=20;
    b2.y=40;
    cout<<b1.y<<endl;
    cout<<b2.y<<endl;

}