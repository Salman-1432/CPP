#include<iostream>
using namespace std;
class Base
{
    protected:
    int a;
    private:
    int b;
};
class Drived:protected Base
{

};
int main()
{
    Base b;
    cout<<"a="<<b.a<<endl;
}