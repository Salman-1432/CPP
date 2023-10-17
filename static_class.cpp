/*#include<iostream>
using namespace std;
class item
{
    static int count;
    int number;
    public:
    void getdata(int a)
    {
        number=a;
        count++;
    }
    void getcount()
    {
        cout<<"count:";
        cout<<count<<"\n";
    }
};
int item::count;
int main()
{
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    cout<<"After reading data"<<"\n";
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;32
}
#include<iostream>
using namespace std;
class test
{
    int code;
    static int count;
    public:
    void setcode()
    {
        code=++count;
    }
    void showcode()
    {
        cout<<"object number="<<code<<endl;
    }
    static void showcount()
    {
        cout<<"count"<<count<<endl;
    }
    
};
int test::count;
int main()
{
    test t1,t2;
    t1.setcode();
    t2.setcode();
    test::showcount();
    test t3;
    t3.setcode();         
    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();


}*/
#include<iostream>
using namespace std;
class manager
{
    char name[20];
    int age;
    void putdata();
    void showdata();
};
void manager::putdata()
{
    cout<<"enter name of a person"<<endl;
    cin>>name;
    cout<<"enter age of a person"<<endl;
    cin>>age;
}
void manager::showdata()
{
    cout<<"name="<<name<<endl;
    cout<<"age="<<age<<endl;
}
const int size=3;
int i;
int main()
{
    manager s[size];
    for( i=0;i<size;i++)
    {
        cout<<"the manager of bank:"<<i+1<<endl;
        s[i].putdata();
    }
    cout<<"\n";
    for(i=0;i<size;i++)
    {
        cout<<"the amnager of bank"<<i+1<<endl;
        s[i].showdata();
    }

}
