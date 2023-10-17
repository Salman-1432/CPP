// class object
#include<iostream>
using namespace std;
class phone
{
    private:
    string p_name;// attributes
    string p_size;// attributes
public:
    phone(string name,string size)// parameterized constructor
    {
        p_name=name;// assign parameter
        p_size=size;// assign parameter
    }
    void makecall()// operation // function
    {
        cout<<"making call using :"<<p_name<<endl;

    }
    void receivedcall()
    {
        cout<<"Received call using :"<<p_name<<endl;
    }
};
int main()
{
    phone iphone1("iphone_x","1000x500");// atomatically call of the constructor
    iphone1.makecall();
    iphone1.receivedcall();
    cout<<"\n";
    phone gpixel("google pixel 2xL","2000x700");
    gpixel.makecall();
    gpixel.receivedcall();
    return 0;
}