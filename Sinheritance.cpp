#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    void get_num()
    {
    cout<<" enter the value for a";
    cin >> a;
}
};

   class B
   {
   public:
    int b,c;
    void get_num1()
    {
    cout<<"enter the value for b";
    cin>> b;
    }
   };

   class c: public A, public B
   {
       public:
       void sum1()
       {
          c=a+b;
           cout <<"addition"<<c;

       }
   };


   int main()
   {
     c c1;
     c1.get_num();
     c1.get_num1();
     c1.sum1();
     return 0;
   }
