///Remove a given node from a doubly linked list using function

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
void removenode();
void print2();



int main()
{
    lists();
    print();
    removenode();
    print2;


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

void removenode()
{
    {
      Y=X;
      int i=1, loc;

      cout<<"\nEnter the position"<<endl;
      cin>>loc;

      while(i<loc)
      {
           Y=Y->next;
           i++;
      }
      Y->prev->next= Y->next;
      Y->next->prev= Y->prev;

}
}

void print2()
{
    cout<<"\nAfter deleting NODE: ";

    Y=X;
    while(Y!=NULL)
    {
        cout<<Y->data<<" ";
        Y=Y->next;
    }
    cout<<endl;
}

