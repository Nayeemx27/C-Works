///Insert at beginning of a doubly linked list using function.

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node *prev;
    int data;
    Node *next;
};

Node *lists(Node *a1, int data)
{
    Node *node1 = new Node;
    node1->prev=NULL;
    node1->data=data;
    node1->next=NULL;
    a1=node1;
    return a1;
}

void print(Node *head)
{
    Node *ptr=head;
    while (ptr!=NULL)
    {
        cout <<ptr->data<<endl;;
        ptr=ptr->next;
    }
}

Node *node_insert(Node *head, int data)
{
    Node *temp=new Node;
    temp->prev=NULL;
        temp->next=head;

    temp->data=data;
    head->prev=temp;
    head=temp;


    return head;
}

int main()
{
    Node *head=NULL;
    Node *a1, *a2, *a3, *a4, *a5;

    a1= lists(head,5);
    head=a1;

    a2= lists(a1->next, 10);
    a1->next=a2;

    a3= lists(a2->next, 15);
    a2->next=a3;

    a4= lists(a3->next, 20);
    a3->next=a4;

    a5= lists(a4->next, 25);
    a4->next=a5;

    print(head);

    int n;

    cout<<"\nEnter the value: ";
    cin>>n;
    cout<<endl;

    head= node_insert(head, n);

    print(head);

    return 0;
}
