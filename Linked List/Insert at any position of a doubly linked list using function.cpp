///Insert at any position of a doubly linked list using function

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

Node *X, *Y, *Z;
void lists();
void print();
void any_position();
void print2();


int main()
{
    lists();
    print();
    any_position();
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

void any_position()
{
    Y=X;

    Node *node1= new Node;
    node1->next= node1->prev = NULL;

    int loc, i=1;
    cout<<"\nEnter position:";
    cin>>loc;

    cout<<"Enter the value: ";
    cin>>node1->data;

    while(i<loc)
    {
        Y=Y->next;
        i++;
    }

    node1->prev=Y;
    node1->next=Y->next;
    Y->next=node1;
    node1->next->prev=node1;
}

void print2()
{
    cout<<"\nNew Array: ";

    Y=X;
    while(Y!=NULL)
    {
        cout<<Y->data<<" ";
        Y=Y->next;
    }
    cout<<endl;
}
