 /*#include<iostream>
 using namespace std;
 main()
 {
     int maths=90;
     int physics=77;
     int chemistry=69;
     cout<<"\nmaths="<<maths<<"\nphysics="<<physics<<"\nchemistry="<<chemistry;
 }
 #include<iostream>
 using namespace std;
 main()
 {
     int a,b;
     cout<<"enter a two number"<<endl;
     cin>>a>>b;
     if(a>b)
     {
         cout<<"A is larger"<<endl;
     }
     else
     {
         cout<<"B is larger"<<endl;
     }
 }
 #include<iostream>
 using namespace std;
 main()
 {
     char ch;
     cout<<"enter a charater for ascii value"<<endl;
     cin>>ch;
     cout<<"ASCII VALUE="<<int(ch);

 }
 #include<iostream>
 using namespace std;
 main()
 {
     int a,b,c,x;
     cout<<"enter a three value"<<endl;
     cin>>a>>b>>c;
     x=a/b-c;
     cout<<"the value of x="<<x<<endl;
 }
 #include<iostream>
 using namespace std;
main()
{
    int f,c;
    cout<<"enter a selsuis is"<<endl;
    cin>>f;
    c=((f-32.0)*5.0/9.0);
    cout<<"c="<<c;
}
#include<iostream>
using namespace std;
main()
{
    int *a;
    int n;
    cout<<"enter a size of the integer array"<<endl;
    cin>>n;
    cout<<"creating an array of size=5"<<n<<endl;
    a=new int[n];
    cout<<"dynamic allocation of memory for array is"<<endl;
    delete a;
    
}
#include<conio.h>
#include<iostream>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
void display(book);
book input();
int main()
{
    book b1;
    b1=input();
    display(b1);
}
void display(book b)
{
    cout<<"bookid="<<b.bookid<<endl<<"title="<<b.title<<endl<<"price=4489"<<b.price<<endl;
}
book input()
{ 
    book b;
    cout<<"enter the three value,bookid,title,price"<<endl;
    cin>>b.bookid>>b.title>>b.price;
    return(b);
}*/
 


