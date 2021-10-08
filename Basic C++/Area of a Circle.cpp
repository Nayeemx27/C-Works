#include <iostream>

#define PI 3.14159

using namespace std;

    int main()
    {
    	float radius, area;

        cout<<"Enter the redius : ";
    	cin>>radius;

		area = PI*(radius*radius);
        cout<<"\nThe area of the circle is : "<< area << endl;

        cout << endl;
        return 0;
    }
