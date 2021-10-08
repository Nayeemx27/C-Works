///Search a given item in a doubly linked list

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
int searchnode();
void print2();



int main()
{
    lists();
    print();
    int X=searchnode();

    if(X==1)
    {
        cout<<"\nItem Found!!!"<<endl;
    }
    else
    {
        cout<<"\nNot Found!!!"<<endl;
    }


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

int searchnode()
{
    cout<<"\n\nEnter search item: ";
    int n, cnt=0;

    cin>>n;

    Y=X;

    while(Y!=NULL)
    {
        if(Y->data==n)
        {
            cnt++;
            return cnt;
        }

        Y=Y->next;
    }
}




