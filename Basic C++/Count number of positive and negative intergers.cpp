/*Write a program which will take 1000 numbers as input and
determine how many of them are positive and how many of
them are negative. (Hint: Use Loop to take inputs) */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, neg=0, pos=0;

    for(int i=0; i<1000; i++)
    {
        cin>>a;
        if(a<0)
        {
            neg++;
        }
        else pos++;
    }
    cout<<"Positive Numbers: "<<pos;
    cout<<endl;
    cout<<"Negative Numbers: "<<neg;
    cout<<endl;


    return 0;
}

