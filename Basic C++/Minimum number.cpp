/*Write a program which will take 1000 numbers as input and
determine the minimum number among them.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000], max=0;
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }
    for (int i=1; i<5; i++){
            if(a[0]>a[i]){
            a[0]=a[i];
        }
    }
    cout<<"Minimum Number: "<<a[0]<<endl;


    cout<<endl;
    return 0;
}

