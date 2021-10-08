//program to store n elements in an array and print it.

#include <iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter size of array: ";
     cin>>n;

     int arr[n];

     cout<<"\nEnter elements:"<<endl;
     for(int i=0; i<n; i++)
     {
          cin>>arr[i];
          cout<<"";
     }

     cout<<"\nOutput:"<<endl;
     for(int j=0 ; j<n; j++)
     {
          cout<<arr[j]<<", ";
     }
     cout<<endl;
     return 0;
}
