/*#include<iostream>
using namespace std;
typedef struct{
    char name[20];
    char roll[9];
    int marks[5];
    float average;
}STUDENT;
void getData(STUDENT & s)
{
    cout<<"Enter name:";
    cin>>s.name;
    cout<<"Enter Roll number:";
    cin>>s.roll;
    cout<<"Enter marks:"<<endl;
    float sum = 0.0;
    for(int i=0;i<5;i++){
        cin>>s.marks[i];
        sum+=s.marks[i];
    }
    s.average = sum/5;
}
void writeData(STUDENT & s)
{
    cout<<"Name = "<<s.name<<endl;
    cout<<"Roll Number = "<<s.roll<<endl;
    cout<<"Average = "<<s.average<<endl;
}
int main()
{
    STUDENT s1;
    getData(s1);
    writeData(s1);
    return 0;
}
#include<iostream>
using namespace std;
struct student
{
    char name[20];
    char roll[20];
    int marks[5];
    float average;
};
void getdata(student & s)
{
    cout<<"enter a name";
    cin>>s.name;
    cout<<"enter a roll number";
    cin>>s.roll;
    cout<<"enter a marks"<<endl;
    float sum=0.0;
    for( int i=0;i<5;i++)
    {
        cin>>s.marks[i];
        sum=sum+s.marks[i];
    }
    s.average=sum/5;
    cout<<"average="<<s.average<<endl;
}
void writedata(student & s)
{
    cout<<"name="<<s.name<<endl;
    cout<<"roll="<<s.roll<<endl;
    cout<<"average="<<s.average<<endl;
}
int main()
{
    student s1;
    getdata(s1);
    writedata(s1);
}*/
#include<iostream>
using namespace std;
typedef struct
{
    char name[20];
    char roll[20];
    int marks[5];
    float average;
}student;
void getdata(student * s)
{
    cout<<"enter a name";
    cin>>*s.name;
    cout<<"enter a roll number";
    cin>>*s.roll;
    cout<<"enter a marks"<<endl;
    float sum=0.0;
    for( int i=0;i<5;i++)
    {
        cin>>*s.marks[i];
        sum=sum+*s.marks[i];
    }
    *s.average=sum/5;
    cout<<"average="<<*s.average<<endl;
}
void writedata(student & s)
{
    cout<<"name="<<s.name<<endl;
    cout<<"roll="<<s.roll<<endl;
    cout<<"average="<<s.average<<endl;
}
int main()
{
    student s1;
    getdata(& s1);
    writedata(s1);
}