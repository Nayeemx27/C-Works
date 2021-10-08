/*Write a program which will take a character as input and
determine if the character is uppercase or lowercase.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    cin>>a;
    if(a>='a' && a<='z')
    {
        cout<<a<<" is Lowercase";
    }
    else
    {
        cout<<a<<" is Uppercase";
    }

    cout<<endl;
    return 0;
}
