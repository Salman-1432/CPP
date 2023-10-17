/* #include<iostream>
#include<algorithm>
using namespace std;
int secandelement(int Arr[],int n)
{
    sort(Arr,Arr+n);
    for(int i=0;i<n;i++)
    {
        //cout<<Arr[i]<<endl;
        if(Arr[i]==Arr[n-2])
        {
            cout<<Arr[i]<<endl;
        }
    }
}
int main()
{
    int Arr[] = {12, 35, 1, 10, 34, 1};
    int size=sizeof(Arr)/sizeof(int);
    int p=secandelement(Arr,size);
    //cout<<p<<endl;
}
 */
#include <iostream>
#include <set>
using namespace std;
 
int main()
{
 
    set<int, greater<int> > s1;
    s1.insert(10);
    s1.insert(5);
    s1.insert(12);
    s1.insert(4);
 
    for (auto i : s1) {
        cout << i << ' ';
    }
    return 0;
}