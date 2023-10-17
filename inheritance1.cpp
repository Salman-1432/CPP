#include<iostream>
using namespace std;
class Base
{
    int Data1;  //private by defaute and is not inheritable
    public:
    int Data2;
    void setData();
    int getData1();
    int getData2();
};
void Base::setData()
{
     Data1=10;
     Data2=20;
}
int Base::getData1()
{
    return Data1;
}
int Base::getData2()
{
    return Data2;
}
class Drived:private Base
{
    int Data3;
    public:
    void process();
    void display();

};
void Drived::process()
{ 
    setData(0);
    Data3=Data2*getData1();
}
void Drived::display()
{
    cout<<"value of Data 1 is="<<getData1()<<endl;
    cout<<"value of Data 1 is="<<Data2<<endl;
    cout<<"value of Data 1 is="<<Data3<<endl;
}

int main()
{
    Drived der;
    //der.setData();
    der.process();
    der.display();   
}