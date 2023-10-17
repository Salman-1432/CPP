/* #include<iostream>
using namespace std;
class car
{
    public:
    int car_id;
    double distance;
    void distance_travell(int a,double b)
    {
        car_id=a;
        distance=b;
    }
    void display()
    {
        cout<<"car is id="<<car_id<<endl;
        cout<<"distance="<<distance<<endl;

    }

};
int main()
{
    car c1;
    c1.distance_travell(10,20.25);
    //c1.car_id=3214;
   // c1.distance=47.00;
    c1.display();
} 
#include<iostream>
using namespace std;
void output(float*);
void output(int*);
void output(int*,float*);
int main()
{
    cout<<"show the number:"<<endl;
    int a=10;
    float b=2.1;
    output(&a);
    output(&b);
    output(&a,&b);
    return 0;
}
void output(int*var)
{
    cout<<"integer the value:"<<var<<endl; 
}
void output(float *var)
{
    cout<<"float the value of the compilar:"<<var<<endl;
}
void output(int *var1,float *var2)
{
    cout<<"inteter"<<var1<<endl;
    cout<<"flaot"<<var2<<endl;
}
#include<iostream>
using namespace std;
class Geeks
{
    public:
    string geekname;
    void printname()
    {
        cout<<"geegsname"<<geekname<<endl;
    }
};
int main()
{
    Geeks obj;
    obj.geekname="abhi";
    obj.printname();
}*/
#include<iostream>
using namespace std;
class Geegs
{
    private:
    int id;
    public:
    Geegs()
    {
        cout<<"Defualt constactor callled"<<endl;
        id=0;
    }
    Geegs(int x)
    {
        cout<<"Prametraise"<<endl;
        id=x;
        cout<<"id="<<id<<endl;
    }
    Geegs(Geegs & c1)
    {
        id=c1.id;
    }
};
int main()
{
    Geegs g1(10);
    Geegs g1(20);

}
