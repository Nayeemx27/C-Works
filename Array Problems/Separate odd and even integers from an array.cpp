//program to separate odd and even integers in separate arrays and print those separate arrays.

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int arr[100],i,num;
    cout<<"Enter the size of the array: ";
    cin>>num;
    cout<<"\nEnter the elements of the array: "<<endl;

    for(i=0; i<num; i++){
        cin>>arr[i];
    }

    cout<<"\nEven numbers of the array are: ";

     for(i=0; i<num; i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<"\nOdd numbers of the array are: ";

     for(i=0; i<=num; i++){
        if (arr[i]%2==1){
            cout<<arr[i]<<" ";
        }
    }
    getch();
    return 0;
}
