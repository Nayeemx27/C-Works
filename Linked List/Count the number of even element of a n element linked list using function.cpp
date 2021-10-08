///Count the number of even element of a n element linked list using function

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
void count();


int main()
{
    lists();
    print();
    count();
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

void count()
{
     Y=X;
     int cnt=0;
     while(Y!=NULL)
     {
          if(Y->data%2==0)
          {
               cnt++;
          }
          Y =Y->next;
     }
     cout<<endl<<"Total even number: "<<cnt<<endl;
}
