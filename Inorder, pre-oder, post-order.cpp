#include<bits/stdc++.h>
using namespace std;

int TREE[100];

void left_child(int value, int parent);
void right_child(int value, int parent);
void left_child2(int value, int parent);
void right_child2(int value, int parent);
void left_child3(int value, int parent);
void right_child3(int value, int parent);


void print(int n)
{
    cout<<n<<"           "<<TREE[n]<<endl;

    if(TREE[n*2]!=NULL)
    {
        print(n*2);
    }

    if(TREE[(n*2)+1]!=NULL)
    {
        print((n*2)+1);
    }
}

int main(void)
{
    TREE[1]=1;

    left_child(11,1);
    right_child(22, 1);

    left_child(33,2);
    right_child(44, 2);

    left_child(55,3);
    right_child(66, 3);

    left_child(77,4);
    right_child(88, 4);

    cout<<"Pre-Order :"<<endl<<endl;

    cout<<"Array     Tree"<<endl;

    print(1);

    TREE[1]=3;

    left_child(11,1);
    right_child(22, 1);

    left_child(33,2);
    right_child(44, 2);

    left_child(55,3);
    right_child(66, 3);

    left_child(77,4);
    right_child(88, 4);

    cout<<"\n-----------------------------\n"<<endl;


    cout<<"In-Order :\n"<<endl;
    cout<<"Array     Tree"<<endl;

    print(1);

    TREE[1]=3;

    left_child(11,1);
    right_child(22, 1);

    left_child(33,2);
    right_child(44, 2);

    left_child(55,3);
    right_child(66, 3);

    left_child(77,4);
    right_child(88, 4);

    cout<<"\n-----------------------------\n"<<endl;


    cout<<"Post-Order :\n"<<endl;
    cout<<"Array     Tree"<<endl;

    print(1);


    return 0;
}

void left_child(int value, int parent)
{
    if(TREE[parent] == '\0')
    {
        exit(1);
    }
    else
    {
        TREE[parent*2]=value;
    }
}

void right_child(int value, int parent)
{
    if(TREE[parent] == '\0')
    {
        exit(1);
    }
    else
    {
        TREE[(parent*2)+1] =value;
    }
}

void left_child2(int value, int parent)
{
    if(TREE[parent] == '\0')
    {
        exit(1);
    }
    else
    {
        TREE[parent*2]=value;
    }
}

void right_child2(int value, int parent)
{
    if(TREE[parent] == '\0')
    {
        exit(1);
    }
    else
    {
        TREE[(parent*2)+1] =value;
    }
}

void left_child3(int value, int parent)

{
    if(TREE[parent] == '\0')
    {
        exit(1);
    }
    else
    {
        TREE[parent*2]=value;
    }
}

void right_child3(int value, int parent)
{
    if(TREE[parent] == '\0')
    {
        exit(1);
    }
    else
    {
        TREE[(parent*2)+1] =value;
    }
}


