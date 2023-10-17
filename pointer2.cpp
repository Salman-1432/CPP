#include<iostream>
using namespace std;
class complex
{
    int real,imaginary;
    public:
    void getData()
    {
        cout<<"The real part is="<<real<<endl;
        cout<<"The imaginary part is="<<imaginary<<endl;

    }
    void setData(int a,int b)
    {
        real=a;
        imaginary=b;

    }
};
int main()
{
    complex c1;
    c1.setData(10,85);
    c1.getData();
    complex *ptr=new complex[4];
    //ptr=&c1;
    ptr->setData(48,95);
    ptr->getData();
}