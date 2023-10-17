//constructor in c++
// class name and function should be same
// automatic call when we craate on objects
// no return type
// if not given by user compile will create itself
// 1 defualt constructor 
// 2 parameterized constructor
// 3 copy constructor
#include<iostream>
using namespace std;
class point
{
    double x;
    double y;
    public:// all fuction is publict type
    point()
    {
        x=0;
        y=0;   
    }
    point(double x1,double y1)// call here paramaterized constructor
    {
        x=x1;// x1 is assign in x;
        y=y1;// y1 is assign in y;
    }
    point(const point &rhs)// reference of p1 in rhs
    // p1 is here place of rhs
    {
        x=rhs.x;// 
        y=rhs.y;
    }
    // getters 
    double getx()
    {
        return x;
    }
    double gety()
    {
        return y;
    }
};
int main()
{
    point p1;// p1 will be call to the default constructor
    point p2(1.5,3.5);// passing parameter// calling of the paramaterized constructor

    point p3=p1;// calling of copy constructor through of p3
    cout<<p2.getx()<<endl;
    cout<<p2.gety()<<endl;

}