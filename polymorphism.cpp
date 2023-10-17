/* #include<iostream>
using namespace std;
class A
{
    int x;
    public:
    void show()
    {
        cout<<"The value of x="<<x<<endl;
    }
};
class B
{
    int y;
    public:
    void show()
    {
        //A::show();
        //cout<<"The value of the x="<<x<<endl;
        cout<<"The value of y="<<y<<endl;
    }
};
int main()
{
    
} 
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int a,*ptr1,**ptr2;
    ptr1=&a;
    ptr2=&ptr1;
    cout<<"The address of ptr1:"<<ptr1<<"\n";
    cout<<"The address of ptr2:"<<ptr2<<"\n";
    cout<<"\n\n";
    cout<<"After increamenting the address value:"<<endl;
    ptr1+=2;
    cout<<"The address of a:"<<*ptr1<<"\n";
    ptr2+=2;
    cout<<"After address of ptr1:"<<*ptr2<<"\n";
}*/
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p;
    p=&a;
    cout<<"the value of is a:"<<*p<<endl;
    *p=*p+a;
    cout<<"The revised value of a is:"<<a<<endl;

}