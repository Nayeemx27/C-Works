///Find difference between maximum and minimum value of a n element linked list using function.

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *X, *Y, *Z;
void lists();
void print();
void difference();


int main()
{
    lists();
    print();
    difference();
    return 0;
}


void lists()
{
    int n, i;
    cout<<"Enter number of Elements: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        Y = new Node;
        cin>>Y->data;
        Y->next = NULL;
        if(i==1)
        {
            X=Y;
        }
        else
        {
            Z->next=Y;
        }
        Z=Y;
    }
}

void print()
{
    cout<<"\nAll Elements: ";

    Y=X;
    while(Y!=NULL)
    {
        cout<<Y->data<<" ";
        Y=Y->next;
    }
}

void difference()
{
    Y=X;
    int max= Y->data;
    int min= Y->data;
    while(Y!=NULL)
    {
        if(max< Y->data)
        {
            max=Y->data;
        }
        if(min> Y->data)
        {
            min=Y->data;
        }
        Y=Y->next;
    }

    cout<<endl<<"\nMaximum Value: "<<max<<endl;
    cout<<"Minimum Value: "<<min<<endl;
    cout<<"Difference: "<<max-min<<endl;

}


