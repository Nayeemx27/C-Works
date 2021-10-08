#include <iostream>

using namespace std;

int main()
{
    char CAL;
    float a, b;

    cout << "Choose an operator from +,-,*,/ and %: ";
    cin >> CAL;

    cout << "\nEnter two numbers:\n";
    cin >> a >> b;

    switch(CAL)
    {
        case '+':
            cout <<"\nResult: "<< a+b<<endl;
            break;

        case '-':
            cout <<"\nResult: "<< a-b<<endl;
            break;

        case '*':
            cout << "\nResult: "<<a*b<<endl;
            break;

        case '/':
            cout <<"\nResult: "<< a/b<<endl;
            break;

        case '%':
            cout <<"\nResult: "<<(int)a%(int)b<<endl;
            break;


        default:

            cout << "Wrong Operator"<<endl;
            break;
    }

    return 0;
}
