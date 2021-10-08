#include <bits/stdc++.h>
using namespace std;

struct off
{
    char total[50];
    int acc, bal;
    string name;
}
bank[100];

int n=11, i=0, cnt=0;;

///less than $200 strc

struct off $200 (struct off stud[100])
{
    for (i=0; i<n; i++)
    {
        if (bank[i].bal<200)
        {
            cout<<bank[i].name<<endl;
        }
    }
    return bank[i];
};

///if more than $1000 add 100

struct off $100 (struct off stud[100])
{
    for (i=0; i<n; i++)
    {
        if (bank[i].bal>1000)
        {
            cout<<bank[i].bal+100<<endl;;
        }


    }
    return bank[i];
};


int main()
{
    cout<<"Enter customer's info: "<<endl<<endl;

    ///input

    for (int i=0; i<n; i++)
    {
        cout<<"("<<i+1<<")\nName:" ;
        cin>>bank[i].name;
        cout<<"Account no:";
        cin>>bank[i].acc;
        cout<<"Balance: ";
        cin>>bank[i].bal;
        cout<<endl;
    }

    ///output

    cout<<"List of customers having less than $200: " <<endl;
    $200(bank);  ///stored function calling

    cout<<endl;

    cout<<"New Balance:"<<endl;
    $100(bank);


    return 0;
}
