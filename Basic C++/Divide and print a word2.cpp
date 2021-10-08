/*Write a program which will take an integer number as input
and print “Hello” if it is divided by 2 and 3 but not divided by
5. Otherwise print “Goodbye”.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n%2==0 && n%3==0 && n%5!=0){
        cout<<"Hello";
    }
    else{
        cout<<"Goodbye";
    }

    cout<<endl;
    return 0;
}
