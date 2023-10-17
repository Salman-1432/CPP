// class 42
#include<iostream>
using namespace std;
class point
{
    public:
    int x,y;
    public:
    point() {}
    point(int a,int b){x=a;y=b;}
};
int main()
{
    point p1(1,1),p2(1,2);
    cout<<p1.x<<" "<<p1.y<<endl;
    cout<<p2.x<<" "<<p2.y<<endl;
}