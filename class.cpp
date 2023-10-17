#include <iostream>
#include<string>
using namespace std;
class binary
{
    string s;

public:
    void read();
    void chk_bin();
    void ones_complement();
    void display();
};
void binary::read()
{
    cout << "Enter the binary number:" << endl;
    cin >> s;
}
void binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid binary nubmer:" << endl;
            exit(0);
        }
    }
}
void binary::ones_complement()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == 0)
        {
            s.at(i) == 1;
        }
       else
        {
            s.at(i) == 0;
        }
    }
}
void binary::display()
{   
    cout<<"displayiny your binary number:"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_complement();
    b.display();

}