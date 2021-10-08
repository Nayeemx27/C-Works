/*Write a program which will take 1000 numbers as input and
determine the maximum number among them. */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000], max=0;
    for(int i=0; i<1000; i++)
    {
        cin>>a[i];
    }
    for (int i=1; i<1000; i++){
        if(a[0]<a[i]){
            a[0]=a[i];
        }
    }
    cout<<"Maximum Number: "<<a[0]<<endl;

    return 0;
}

