#include<iostream>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"enter the value A"<<endl;
    cin>>a;
    cout<<"enter the value B"<<endl;
    cin>>b;

    c=a-b;

    try
    {
        if(c!=0)
        {
            cout<<"result(c/a)"<<c/a<<endl;
        }
        else
        {
            throw(c);
        }
    }
    catch(int i)
    {
        cout<<"exception caught c: "<<c;
    }
    return 0;
}
