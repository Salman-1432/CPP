#include<iostream>
#include<cstring>
using namespace std;
class Driver{
    private:
        char * name;
        int age;
    public:
        Driver(char * = (char *)"Salman", int = 0);
        Driver(Driver&);
        friend ostream& operator<<(ostream&,Driver&);
        ~Driver();
};
Driver::Driver(char * name, int age):name(new char[strlen(name)+1]),age(age){
    strcpy(this->name,name);
}
Driver::Driver(Driver & d):name(new char[strlen(d.name)+1]),age(d.age){
    strcpy(name,d.name);
}
ostream& operator<<(ostream& out,Driver& d)
{
    out<<"Name = "<<d.name<<endl;
    out<<"Age = "<<d.age<<endl;
}
Driver::~Driver()
{
    delete [] name;
    cout<<"Name is deallocated"<<endl;
}
int main()
{
    char driverName[] = {"Mithun Borah"};
    int driverage = 25;
    Driver d1(driverName,driverage);
    cout<<d1;
    {
        Driver d2(d1);
        cout<<d2;
    }
    return 0;
}