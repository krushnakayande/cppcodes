#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"enter value a & b"<<endl;
    cin>>a>>b;

    c=a/b;

    try
    {
        if(a!=0 || b!=0)
        {
            cout<<"result : "<<c;
        }
        else
        {
            throw(c);
        }
    }
    catch(int x)
    {
        cout<<"not divisible by zero";
    }
return 0;
}
