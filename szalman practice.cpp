#include<iostream>
using namespace std;
void increament(int *a,int *b)
{
    int c,d;
    d=*a+*b;
    c=*a-*b;
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

