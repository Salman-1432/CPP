#include<iostream>
using namespace std;
class student
{
    
char name[20];
char roll[9];
int marks[5];
float average;
 public:
void GetData()
{
    cout<<"enter a name"<<endl;
    cin>>name;
    cout<<"enter a roll numer"<<endl;
    cin>>roll;
    cout<<"enter a marks"<<endl;
    float sum=0.0;
    for(int i=1;i<6;i++)
    {
        cin>>marks[i];
        sum=sum+marks[i];
        cout<<"sum"<<sum<<endl;
    }
    average=sum/5;
    cout<<"average="<<average<<endl;
}
void WriteData()
{
    cout<<"name="<<name<<endl;
    cout<<"roll="<<roll<<endl;
    cout<<"marks="<<marks<<endl;
    cout<<"average="<<average<<endl;
}

};
int main()
{
    student s;
    s.GetData();
    s.WriteData();
}