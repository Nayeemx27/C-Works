///Delete the first element of a linked list using function

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
void removefirst();
void print2();



int main()
{
    lists();
    print();
    removefirst();
    print2();


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

void removefirst()
{
     Y=X;
    if(Y==NULL)
    {
        cout<<" "<<endl;
    }
    X = X->next;
}

void print2()
{
    cout<<"\nAfter deleting the First element: ";

    Y=X;
    while(Y!=NULL)
    {
        cout<<Y->data<<" ";
        Y=Y->next;
    }
    cout<<endl;
}
