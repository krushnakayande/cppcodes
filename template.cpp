#include<iostream>
using namespace std;
template<typename T,typename T1>
T1 add (T num1,T1 num2)
{
    return num1+num2;
}
int main()
{
    cout<<"add = "<<add<int>(2,3)<<endl;
    cout<<"add = "<<add<double>(2.3,3.5)<<endl;
    cout<<"add = "<<add<float>(2.3f,2.6f)<<endl;
}
