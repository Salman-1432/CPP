#include<iostream>
using namespace std;
class items
{
    int itemcode[50];
    float itemprice[5];
    int n;
    public:
    void CNT()
    {
        n=0;
    }
    void getitem();
    void displaysum();
    void remove();
    void displayitem();   
};
void items::getitem()
{
    cout<<"enter item"<<endl;
    cin>>itemcode[n];
    cout<<"itemcost"<<endl;
    cin>>itemprice[n];
    n++;
}
void items::displaysum()
{
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+itemprice[i];
        cout<<"total value"<<sum<<endl;
    }
}
void items::remove()
{
    int a;
    cout<<"enter item code"<<endl;
    cin>>a;
    for(int i=0;i<n;i++)
    if(itemcode[i]==a)
    itemprice[i]=0;
}
void items::displayitem()
{
    cout<<"code price"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<itemcode[i];
        cout<<" "<<itemprice[i];
    }
    cout<<"\n";
}
int main()
{
    items b;
    b.CNT();
    int x;
    do
    {
        cout<<"you can do the following"<<endl;
        cout<<"enter approciate number"<<endl;
        cout<<"\n1:add an item"<<endl;
        cout<<"\n2:display total value"<<endl;
        cout<<"\n3:delete an item"<<endl;
        cout<<"\n4:display all item"<<endl;
        cout<<"\n5:Quit"<<endl;
        cin>>x;
        switch(x)
        {
            case 1:b.getitem();
                   break;
            case 2:b.displaysum();
                   break;
            case 3:b.remove();
                   break;
            case 4:b.displayitem();
                   break;
            case 5:break;
            defualt:cout<<"invlaid chioce"<<endl;
        }
    }while(x!=5);
    return 0;    
}
