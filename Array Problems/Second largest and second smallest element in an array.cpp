//program to find the second largest and second smallest element in an array

#include <iostream>
using namespace std;
int main()
{
     cout<<"Enter the  size of array: ";
     int n;
     cin>>n;

     int arr[n];

     cout<<"\nEnter array elements: "<<endl;

     for(int t=0 ; t<n;  t++ )
     {
          cin>>arr[t];
          cout<<"";
     }


     int temp=0;
     for(int t=0; t<n; t++)
     {
          for(int m=0; m<n-t-1; m++)
          {
               if(arr[m]>arr[m+1])
               {
                    temp=arr[m];

                    arr[m]=arr[m+1];

                    arr[m+1]=temp;
               }
          }
     }


     cout<<"\nThe sorted array is:"<<endl;
     for(int t=0; t<n; t++)
     {
          cout<<arr[t]<<" ";
     }
     cout<<endl;

     cout<<"\nThe second largest element: "<<arr[n-2]<<endl;
     cout<<"The second smallest element: "<<arr[1]<<endl;


     return 0;
}
