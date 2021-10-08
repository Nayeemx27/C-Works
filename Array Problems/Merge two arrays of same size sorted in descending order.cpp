//program to merge two arrays of same size sorted in descending order and print it

#include <iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter size of 2 arrays: ";
     cin>>n;
     int arr1[n];
     int arr2[n];

     cout<<"\nFirst array elements: "<<endl;
     for(int i=0; i<n; i++)
     {
          cin>>arr1[i];
          cout<<"";
     }

     cout<<"\nSecond array elements: "<<endl;
     for(int i=0; i<n; i++)
     {
          cin>>arr2[i];
          cout<<"";
     }
     cout<<endl;

     int merg=n+n;
     int idx=0;
     int arr3[merg];

     for(int i=0; i<n; i++)
     {
          arr3[idx]=arr1[i];
          idx++;
     }
     for(int j=0; j<n; j++)
     {
          arr3[idx]=arr2[j];
          idx++;
     }

     cout<<"New array after merging two: "<<endl;
     for(int i=0 ; i<merg; i++)
     {
          cout<<arr3[i]<<",";
     }
     cout<<endl;

     int temp=0;
     for(int i=0 ; i <merg; i++)
     {
          for(int j=0 ; j<merg-i-1; j++)
          {
               if(arr3[j]<arr3[j+1])
               {
                    temp=arr3[j];
                    arr3[j]=arr3[j+1];
                    arr3[j+1]=temp;
               }
          }
     }

     cout<<"\nDescending order: "<<endl;
     for(int i=0; i<merg ; i++)
     {
          cout<<arr3[i]<<",";
     }
     cout<<endl;
     return 0;
}
