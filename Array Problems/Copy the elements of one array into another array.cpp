//program to copy the elements of one array into another array and print the copied array.

#include <iostream>
using namespace std;

int main()
{
    int arr[100],arr2[100],n, i;


    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"\nEnter array elements: "<<endl;


    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<n; i++)
    {
        arr2[i]=arr[i];
    }

    cout<<"\nCopied array: ";
    for(i=0; i<n; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;


    return 0;
}

