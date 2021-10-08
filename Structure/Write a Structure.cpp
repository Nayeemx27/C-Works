///1. Write a structure for n students' name, id, address and mark, take them as input and print it.

#include <bits/stdc++.h>
using namespace std;

struct stu
{
    char name[50];
    int ID;
    string address;
    float mark;
}
stud[100];

int main()
{
    int n;
    cout<<"Select number of students info to store: ";
    cin>>n;
    cout<<"\nEnter "<<n<<" students information:" << endl;

    for (int i=0; i<n; i++)                                  ///Input
    {

        cout<<"\n"<<i+1<<".\nEnter name: ";
        cin>>stud[i].name;

        cout<<"Enter ID: ";
        cin>>stud[i].ID;

        cout<<"Enter address: ";
        cin>>stud[i].address;

        cout<<"Enter mark: ";
        cin>>stud[i].mark;

    }

    for (int i=0; i<n; i++)                                ///output
    {
        cout<<"\nInfo of student no."<<i+1<<endl;
        cout<<"Name: "<<stud[i].name<<endl;
        cout<<"ID: "<<stud[i].ID<<endl;
        cout<<"Address: "<<stud[i].address<<endl;
        cout<<"Marks: "<<stud[i].mark<<endl;
    }


    return 0;
}

