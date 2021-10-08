/*Write a program which will take a character as input and
change the case of that character. If the character is
uppercase, change it to lowercase and if the character is
lowercase then change it to uppercase.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    cin>>a;
    if(a>='a' && a<='z')
    {
        a=towupper(a);
        cout<<a;
    }
    else
    {
        a=towlower(a);
        cout<<a;
    }

    cout<<endl;
    return 0;
}
