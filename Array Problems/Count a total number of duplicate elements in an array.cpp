//program to count a total number of duplicate elements in an array.

#include <iostream>

using namespace std;

int main()
{
    int arr[100], i, j, n, count = 0;

    cout<<"Enter size of the array : ";
    cin>>n;

    cout<<"\nEnter elements: "<<endl;
    for(i=0; i<n; i++)
{
        cin>>arr[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {

        if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    cout<<"\nNumber of duplicate elements found is: "<<count<<endl;

    return 0;
}
