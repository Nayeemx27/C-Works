//program to find the sum of all n elements of the array using while loop.

#include <iostream>

using namespace std;

int main ()
{
    int array[100], n, sum = 0;
    int i = 0, j = 0;

    cout << "Enter size of array: ";

    cin >> n;

    cout << "\nEnter Elements: "<<endl;

    while (i < n)
    {
        cin >> array[i];
        i++;
    }

    while (j < n)
    {
        sum = sum + array[j];
        j++;
    }

    cout << "\nSummation of "<<n<<" numbers: "<<sum << endl;


    return 0;
}
