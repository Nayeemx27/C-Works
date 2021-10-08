//program to read n number of values in an array and display it in reverse order.

#include <iostream>
using namespace std;

int main(){
    int input[500], output[500], count, i;

    cout << "Array Size: ";
    cin >> count;

    cout << "\nMain Array:"<<endl;

    for(i = 0; i < count; i++){
        cin >> input[i];
    }

    for(i = 0; i < count; i++){
        output[i] = input[count-i-1];
    }

    cout << "\nReversed Array: "<<endl;
    for(i = 0; i < count; i++){
        cout << output[i] << " ";
    }
    cout<<endl;

    return 0;
}
