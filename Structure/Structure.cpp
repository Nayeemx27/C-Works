#include <bits/stdc++.h>
using namespace std;

struct stu
{
    char name[50];
    int roll, age;
    string address;
}
stud[100];

int n=5;                            ///global declaration

struct stu evenroll (struct stu stud[100])   ///even roll detector
{
    int i=0;
    for (i=0; i<n; i++)
    {
        if (stud[i].roll%2==0)
        {
            cout<<stud[i].name<<endl;
        }
    }
    return stud[i];
};

struct stu age (struct stu stud[100])        ///age=14 detector
{
    int i;
    for( i=0; i<n; i++)
    {
        if(stud[i].age==14)
        {
            cout<< stud[i].name<<endl;
        }
    }
    return stud[i];
}

int main()
{
    cout<<"Enter student's info: "<<endl<<endl;

    for (int i=0; i<n; i++)                         ///input
    {
        cout<<"("<<i+1<<")\nName:" ;
        cin>>stud[i].name;
        cout<<"Roll no:";
        cin>>stud[i].roll;
        cout<<"Age: ";
        cin>>stud[i].age;
        cout<<endl;
    }


    ///output

    cout<<"List of students having age 14: " <<endl;
    age(stud); ///stored function calling

    cout<<endl;

    cout<<"List of students having even roll:"<<endl;
    evenroll(stud); ///stored function calling


    return 0;
}
