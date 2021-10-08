#include<iostream>

using namespace std;

int sum(int n);

int main()
{
   int n;
   cout<<"Enter a positive value: ";
   cin>>n;


   if(n<=0)
      cout<<"INVALID VALUE!!!";

   else
      cout<<"SUM:  "<<sum(n);

   return 0;
}
int sum(int n){

   if(n!= 0) {
      return n + sum(n-1);
   }
   return 0;
}
