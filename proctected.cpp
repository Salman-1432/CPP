#include<iostream>
using namespace std;
class Student
{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);

};
void Student::set_roll_number(int r)
{
    roll_number=r;
}
void Student::get_roll_number()
{
    cout<<"Roll number of student="<<roll_number<<endl;
}
class Exam:public Student
{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void get_marks(void);
};
void Exam::set_marks(float m1,float m2)
{
    maths=m1;
    physics=m2;
}
void Exam::get_marks()
{
    cout<<"The marks obtained in maths are:"<<maths<<endl;
    cout<<"The marks obtained in phisics are:"<<physics<<endl;
}
class result: public Exam
{
    protected:
    int percentange;
    public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout<<"your percentage marks is :"<<(maths+physics)/2<<"%"<<endl;
    }
};
 int  main()
{
    result sal;
    sal.set_roll_number(450);
    sal.set_marks(95.0,90.0);
    sal.display_result();
}