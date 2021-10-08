#include <iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a line to print: "<<endl;
    getline(cin,str);

    int n;
    cout<<"\nEnter how many times you want to print: ";
    cin>>n;
    getchar();

    cout<<endl;

    for(int i=0; i<n; i++)

        cout<<i+1<<". "<<str<<endl;

    return 0;
}
