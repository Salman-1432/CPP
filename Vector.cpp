/*#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    int val1;
    long val2;
    char ch;
    float f1;
    double f2;
    scanf("%d %ld %c %f %lf",&val1,&val2,&ch,&f1,&f2);
    printf("\n%d",val1);
    printf("\n%ld",val2);
    printf("\n%c",ch);
    printf("\n%f",f1);
    printf("\n%f2",f2);
}
#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    int val1;
    long val2;
    char ch;
    float f1;
    double f2;
    scanf("%d %ld %c %f %lf",&val1,&val2,&ch,&f1,&f2);
    printf("\n%d",val1);
    printf("\n%ld",val2);
    printf("\n%c",ch);
    printf("\n%0.3f",f1);
    printf("\n%0.9lf",f2);
}
#include<stdio.h>
int main()
{
     int a,b;
     a=5.12341;
     b=5.12341;
    if(a==b)
    {
        printf("t");
    }
    else
    {
        printf("f");
    }

}
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number:"<<endl;
    cin>>x;
    int rem,sum=0,y=x;
    while(x!=0)
    {
        rem=x%10;
        sum=sum*10+rem;
        x=x/10;
    }
    if(y==sum)
    {
        cout<<"yes:"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }

    
}
#include<iostream>
using namespace std;
void towerhanoi(int n,char s,char d,char t)
{
    if(n==0)
    {
        return ;
    }
    towerhanoi(n-1,s,t,d);
    cout<<"move disk:"<<n<<"from rod:"<<s<<"to end:"<<d<<endl;
    towerhanoi(n-1,t,d,s);
}
int main()
{
    int N=3;
    towerhanoi(N,'A','C','B');
}
#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> v1,v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int j=0;j<v2.size();j++)
    {
        cout<<v2[j]<<" ";
    }
    cout<<endl;
    v1.swap(v2);
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int j=0;j<v2.size();j++)
    {
        cout<<v2[j]<<" ";
    }
    
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr1={1,4,6,3,2};
    vector<int> arr2={6,2,5,7,1};
    vector<int> arr3(10);
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr3.begin());
    cout << "The container after merging initial containers is : ";
    int median=0;
    int med;
    for(int i=0;i<arr3.size();i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < arr3.size(); i++)
    {
        median=median+arr3[i];
    }
    med=median/arr3.size();

    cout<<"output the "<<med<<endl;
    return 0;
 

}*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
{
    vector<double> nums3;
    double median=0;
    merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums3.begin());
    cout<<"show the soerted array:"<<endl;
    for(int i=0;i<nums3.size();i++)
    {
        cout<<nums3[i]<<" ";
    }
    cout<<endl;
    for(auto i=0;i<nums3.size();i++)
    {
        median=median+nums3[i];
    }
    return median;

}
int main()
{
    vector<int> nums1,nums2;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums2.push_back(10);
    nums2.push_back(20);
    nums2.push_back(30);
    double mad=findMedianSortedArrays(nums1,nums2);
    cout<<mad<<endl;
    

}





