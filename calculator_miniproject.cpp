#include<iostream>
using namespace std;

class calculator
{
public:

    double t=0;// for total

    calculator()
    {
        int a;

        cout<<"Calculator"<<endl;
        cout<<"-----------------------------------------------"<<endl;
        cout<<"addition press 1"<<endl;
        cout<<"substraction press 2"<<endl;
        cout<<"multiplication press 3"<<endl;
        cout<<"division press 4"<<endl;
        cout<<"Mod press 5"<<endl;
        cout<<"recalcultion press 6"<<endl;
        cin>>a;
        switch(a)
        {
        case 1:
            addi();
        break;

        case 2:
              sub();
        break;
        case 3:
            multi();
        break;

        case 4:
            divi();
        break;

        case 5:
            mod();
        break;
        case 6:
           calculator();
        break;
        default:
            cout<<"enter no. is invalid"<<endl;
        }
    }

    void addi()
    {
        double a,b;
        cout<<"enter the numbers you want to for addition: ";
        cin>>a>>b;
        /*for(int i=1;i<a;i++)
        {
            cin>>a[i]
        }*/
        t=a+b;
        cout<<"addition : "<<t;

    }
    void sub()
    {
        int a,b;
        cout<<"enter the numbers you want to for substraction: ";
        cin>>a>>b;
       /* for(int i=1;i<a;i++)
        {
            cin>>a[i]
        }
        */
        t=a-b;
        cout<<"substractiion : "<<t;
    }
    void multi()
    {
        int a,b;
        cout<<"enter the numbers you want to for multiplication: ";
        cin>>a>>b;
        //for(int i=1;i<a;i++)
        //{
          //  cin>>a[i]
        //}
        t=a*b;
        cout<<"Multiplication"<<t;
    }
    void divi()
    {
        int a,b;
        cout<<"enter the numbers for division: ";
        cin>>a>>b;
        t=a/b;
        cout<<"Division: "<<t;

    }
    void mod()
    {
        int a,b;
        cout<<"enter the numbers you want to for addition: ";
        cin>>a>>b;
        t=a%b;
        cout<<"Mod : "<<t;

    }

};

int main()
{
    calculator c;
    return 0;
}
