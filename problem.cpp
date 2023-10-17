#include<iostream>
using namespace std;
class time
{
    int hours;
    int minutes;
    public:
    void gettime(int ,int );
    void puttime();
    void sum(time,time);
};
void time::gettime(int h,int m)
{
    hours=h;
    minutes=m;
}
void time::puttime()
{
    cout<<"hours="<<hours<<endl;
    cout<<"minutes="<<minutes<<endl;
}
void time::sum(time t1,time t2)
{
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours;
}
int main()
{
    time s1,s2,s3;
    s1.gettime(2,45);
    s2.gettime(7,78);
    s3.sum(s1,s2);
    s1.puttime();
    s2.puttime();
    s3.puttime();
}




