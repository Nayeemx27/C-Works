//program to find the maximum and minimum element in an array.

#include<iostream>
using namespace std;

int main ()
{
    int arr[100], n, i, max, min;
    cout << "Input size of array : ";
    cin >> n;
    cout << "\nEnter the elements of the array : "<<endl;

    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];

    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];

    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }

    cout << "\nLargest element : " << max<<endl;
    cout << "Smallest element : " << min<<endl;


    return 0;
}

