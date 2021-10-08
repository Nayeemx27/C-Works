//program to insert New value in the array

#include <iostream>
using namespace std;

 int main() {

   int arr[1000], size, pos, val, i, temp;

   cout << "Enter the size of array: ";
   cin  >> size;
   cout << "\nEnter array elements: "<<endl;


   for(i = 0; i < size; i++) {
      cin >> arr[i];
   }

   cout << "\nEnter a position: ";
   cin  >> pos;

   cout << "\nEnter a value to insert: ";
   cin  >> val;

   for(i = size; i >= pos; i--) {
      arr[i] = arr[i-1];
   }

   size++;

   arr[pos-1] = val;

   cout << "\nNew Array: "<<endl;

   for(i = 0; i < size; i++) {
      cout << arr[i] << ",";
   }
   cout<<endl;


   return 0;
 }
