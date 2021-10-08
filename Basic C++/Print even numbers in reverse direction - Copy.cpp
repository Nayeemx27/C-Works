/*Write a program which will print all the even numbers from
1 to 1000 using LOOP. (In Reverse direction) */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int i=1000; i>=1; i--) {
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    cout<<endl;
    return 0;
}

