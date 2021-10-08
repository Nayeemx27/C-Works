#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str;
    cout << "Enter a string: "<<str;
    getline (cin, str);
    cout << "\nLength of the String: " <<str.size()<<endl;

    int Y=str.size();

    if(Y%3==0){
      cout<<"Which is divisible by 3"<<endl;
   }
   else{
      cout<<"Which is not divisible by 3"<<endl;
   }


    return 0;
}
