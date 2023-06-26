#include<iostream>
using namespace std;
template <class T>
class Number
{
    T num;

public:
    Number (T n)
    {
        num=n;
    }

    T getnum()
    {
        return num;
    }
};

int main()
{
    Number <int> obj(5);
    cout<<"value = "<<obj.getnum();
    return 0;
}
