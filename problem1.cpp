#include<iostream>
/*#include<cstdlib>
using namespace std;
void increament(int *a,int *b)
{
    int c,d;
    d=*a+*b;
    c=abs(*a-*b);
    printf("%d",d);
    printf("\n");
    printf("%d",c);
}
int main()
{
    int a,b;
    int d,c;
    scanf("%d%d",&a,&b);
    increament(&a,&b);
    return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
	int n=10;
    int A[n];
    int N,i;
    cin>>N;
    cout<<"\n";
    for(i=0;i<N;i++)
    {
        cin>>A[i];
    }
    cout<<"\n";
    for(i=N-1;0<=i;i--)
    {
        cout<<" "<<A[i]; 
    }
    
}
