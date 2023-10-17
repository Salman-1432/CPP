#include<iostream>
using namespace std;
int main()
{
    int *ptr,a=12;
    ptr=&a;
    cout<<"print the value of pointer:"<<*(ptr)<<endl;
    //int *p=new int(40);
    int *p=new int(40);
    cout<<"The value at address p is:"<<*(p)<<endl;
    int *arr=new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    cout<<"The value of arr[0] is"<<arr[0]<<endl;
    cout<<"The value of arr[1] is"<<arr[1]<<endl;
    cout<<"The vlaue of arr[2] is "<<arr[2]<<endl;
    return 0;
}