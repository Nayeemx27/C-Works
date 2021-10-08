//program to delete an element at desired position (given index) from an array*/

#include <iostream>
using namespace std;

int main()
{
    int arr[100],i, size, pos;
    cout<<"Enter size of the array : ";
    scanf("%d", &size);

    cout<<"\nEnter "<<size<<" elements in array : "<<endl;
    for(i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    cout<<"\nEnter the desired position to delete : ";
    scanf("%d", &pos);

    if(pos < 0 || pos > size)
    {
        cout<<"\nInvalid position!"<<endl;
    }
    else
    {
        for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }

        size--;

        cout<<"\nNew Array: "<<endl;
        for(i=0; i<size; i++){

            cout<<arr[i]<<" "<<endl;
        }
    }



return 0;
}
