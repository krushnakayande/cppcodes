#include<iostream>
using namespace std;

class Student
{
public:
    int rollno;

        void rollno1()
        {
            cout<<"enter the roll no.: "<<endl;
            cin>>rollno;
        }
        void rollnodis()
        {
            cout<<"Roll no. : "<<rollno<<endl;
        }
};

class Test: public Student
{
public:
    int M1,M2;
    void mark()
    {
        rollno1();
        cout<<"enter the Marks 1: "<<endl;
        cin>>M1;
        cout<<"enter the Marks 2: "<<endl;
        cin>>M2;

    }
    void marksdis()
    {
        rollnodis();
        cout<<"marks 1: "<<M1<<endl;
        cout<<"marks 2: "<<M2<<endl;
    }
};


class sportmarks
{
public:
    int SPM;

    void sportmark()
    {
        cout<<"enter the sport marks : "<<endl;
        cin>>SPM;
    }
    void SPMDis()
    {
        cout<<"the sport marks is :"<<SPM<<endl;
    }
};

class result: public Test,public sportmarks
{
public:
    int total;

    void totalresult()
    {
        mark();
        sportmark();
        marksdis();
        SPMDis();
        total = M1+M2+SPM;
        cout<<"total all marks M1+M2+SPM : "<<total<<endl;

    }
};

int main()
{
    result R;
    R.totalresult();
    return 0;
}
