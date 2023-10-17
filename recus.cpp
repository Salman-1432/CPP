// class 41
#include<iostream>
using namespace std;
void print(int times)
{
    if(times==0)
        return ;
    cout<<"c++"<<times<<endl;
    --times;
    print(times);// recursion function
    cout<<"Reverse:"<<times<<endl;
}
int main()
{
    print(30);
    return 0;
}