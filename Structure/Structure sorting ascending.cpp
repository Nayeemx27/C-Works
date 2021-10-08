///write a program to sort the above structure in ascending way using bubble sort on the basis of mark field

#include <bits/stdc++.h>
using namespace std;

struct stu
{
    char name[50];
    int ID;
    string address;
    float mark;
}
stud[100],temp;

int main()
{
    int n;
    cout<<"Select number of students info to store: ";
    cin>>n;
    cout<<"\nEnter "<<n<<" students information:" << endl;

    for (int i=0; i<n; i++)                  ///input
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

    for(int i=0; i<n; i++)                     ///sorting
    {
        for(int j=0; j<n-1; j++)
        {
            if(stud[j].mark>stud[j+1].mark)
            {
                temp=stud[j];
                stud[j]=stud[j+1];
                stud[j+1]=temp;
            }
        }
    }
    cout<<"\nInfo of student according to ascending Order of numbers: "<<endl;


    for (int i=0; i<n; i++)                          ///output
    {
        cout<<"\n"<<i+1<<".\nName: "<<stud[i].name<<endl;
        cout<<"ID: "<<stud[i].ID<<endl;
        cout<<"Address: "<<stud[i].address<<endl;
        cout<<"Marks: "<<stud[i].mark<<endl;
    }


    return 0;
}
