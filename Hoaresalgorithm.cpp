#include<iostream>
using namespace std;
int Quicksort(int arr[],int s,int e)
{
    if(s>=e)
        return ;
    int p=partion(arr,s,e);
    
}
int main()
{
    int arr[]={2,1,3,0,87,5};
    int n=6;
    Quicksort(arr,0,n-1);

}