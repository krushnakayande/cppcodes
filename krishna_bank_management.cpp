#include<iostream>
#include<string>
using namespace std;

class Bank
{
public:
string account,accountv;
string name,mob,add;
char ch;

int bal=0,wd,dp,update;

Bank(int bal = 0)
{
    this->bal = bal;
}
Bank(string account)
{
    this->account;
}

public:

    void create_account()
    {
        int a;
       cout<<"Enter the Account no. : "<<endl;
        getline(cin,account);
        cin>>account;

        //cout<<"Enter Your name : "<<endl;
        //cin>>name;
        getline(cin,name);

        updateable();

        cout<<"your account has been created successfully"<<endl;

        cout<<"\n";

        display_account();

        cout<<"\nyou want to continue in this account then press:Y and for Exit N"<<endl;
        cin>>ch;

        if(ch == 'y' || 'Y')
        {
            enter_in_account();
        }else
        {
            cout<<"exited";
        }



    }

    void display_account()
    {
        cout<<"account number : "<<account<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Mobile number : "<<mob<<endl;
        cout<<"Address : "<<add<<endl;
    }

    void enter_in_account()
    {
        cout<<"\nEnter Your Bank Account Number: "<<endl;
        cin>>accountv;
        if(account == accountv)
        {
            int a,r;
            void display_account();


           do
           {
            cout<<"\nwhat you want to transaction in do in your account : "<<endl;
            cout<<"Select your choice :"<<endl;
            cout<<"1. check balance account"<<endl;
            cout<<"2. deposit to account"<<endl;
            cout<<"3. withdrawal from account"<<endl;
            cout<<"4. update your account: "<<endl;
            cout<<"5. Exit"<<endl;
            cin>> a;
               switch (a)
           {
           case 1:
            check_bal();
            break;
           case 2:
            deposite();
            break;
           case 3:
            withdrawal();
            break;
           case 4:
            update_ac();
            break;
           case 5:
            exit();
            break;

           default:
            cout<<"Enter transaction choice is incorrect"<<endl;
           }

           cout<<"\nDo you want to continue then press 1 otherwise 2: "<<endl;
           cin>>r;
           }while(r==1);
        }else
        {
            cout<<"Your Account Number Is Invalid"<<endl;
        }
    }

    void deposite()
    {
        display_account();
        cout<<"\nEnter the amount of you want to deposite:"<<endl;
        cin>>dp;
        bal=dp;
        cout<<"your current balance is :"<<bal<<endl;

    }
    void withdrawal()
    {
        display_account();

        cout<<"Enter the Withdrawal Amount from account : "<<endl;
        cin>>wd;
        if( bal>wd)
        {
            bal=bal-wd;
            cout<<"Your Amount is Withdrawal Sucessfully"<<endl;
            cout<<"\nYour Current Balance is :"<<bal<<endl;
        }
        else{
            cout<<"Your Account Have a Insufficient Balance "<<endl;
        }
    }
    void check_bal()
    {
        display_account();

        cout<<"Your Account Balance is : "<<bal;
    }

     void updateable()
    {
        cout<<"Enter Your Mobile Number :"<<endl;
        getline(cin,mob);

        cout<<"Enter Your Address :"<<endl;
        getline(cin,add);
    }

    void update_ac()
    {
        display_account();
        cout<<"what you want to update in Account : "<<endl;
        cout<<"mobile number :"<<endl;
        cout<<"address :"<<endl;
    }
    void exit()
    {
        Bank();
    }
};


int main()
{
    Bank b;

    int a;
    char ch1;
    do
    {
    cout<<"WEL COME TO THE JILHA  BANK"<<endl;



    cout<<"1. Create Account"<<endl;
    cout<<"2. Enter your Account"<<endl;

    cin>>a;


    switch(a)
    {
    case 1:
        b.create_account();
        //b.display_account();
        break;
    case 2:
        b.enter_in_account();
        break;
    default:
        cout<<"Given input is invalid"<<endl;
    }
        cout<<"\ndo you want to continue : then press y otherwise for NO press n"<<endl;
        cin>>ch1;
    }while(ch1 == 'y');
    return 0;
}
