// class 39
// destructor in c++;
// notes
// This is the special member with same name as class with title ~at front
// used to distructor the memory of object which was cosntructor ;
// destructor get called explicitly but that is not good practice
// the only place where you will call destructor explicitly is after placement new(this is the title advaned topic)
/* #include <iostream>
using namespace std;
class Base
{
    int x;
    public:
    Base()
    {
        cout << "default costructor:" << endl;
    }
    Base(int a) : x{a}
    {
        cout<<"paramaterized costructor:"<<endl;
    }
    ~Base()
    {
        cout << "destructor" << endl;
    }
};
int main()
{
    Base b;
    return 0;
} */
#include <iostream>
using namespace std;
class Base
{
    int *x;// *x not pointer ,that has hold the value
    int *y; 
    public:
    Base()
    {
        cout << "default costructor:" << endl;
    }
    Base(int *a) : x{a}
    {
        cout<<"paramaterized costructor:"<<endl;
    }
    ~Base()
    {
        delete x;// delete dynamic memory;
        delete y;// delete dynamic memory which is create;
        cout << "destructor" << endl;
    }
};
int main()
{
    Base b(new int(10));// b is object and new int means new expression 
    // new word is used for dynamic allocation 
    int *p=new int ;
    Base b;
    delete p;
    return 0;

}
// NULL ponter means not point anything