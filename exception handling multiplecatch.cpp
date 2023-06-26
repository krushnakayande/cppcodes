#include<iostream>
using namespace std;

void test(int x)
{
        try
        {
            if(x==1) throw x;
            else if(x==0) throw'x';
            else if(x==-1) throw 1.0;
        }
        catch(char c)
        {
            cout<<"caught charater";
        }
        catch(int m)
        {
            cout<<"caught an integer";

        }
        catch(double d)
        {
            cout<<"caught an double";

        }

}

int main()
{
    cout<<"testing multiple catches";
    cout<<"x ==1";
    test(1);
    cout<<"x ==0";
    test (0);
    cout<<"x == -1";
    test (-1);
    return 0;
}

