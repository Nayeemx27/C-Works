/*Write a program which will take 50 characters as input and
determine how many of them are vowels and how many of
them are consonants.*/

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string a;
    getline (cin, a);
    int vow = 0, con = 0, non=0;
    for (int i = 0; i<a.size(); i++)
    {
        if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O'
                || a[i] == 'U' || a[i] == 'a' || a[i] == 'e' || a[i] == 'i'
                || a[i] == 'o' || a[i] == 'u')
        {
            vow++;
        }
        else if (a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
        {
            con++;
        }
        else
        {
            non++;
        }
    }

    cout << "\nVowel: " << vow << endl;
    cout << "Consonant: " << con << endl;
    cout << "Non Alphabetic: " << non << endl;

    return 0;
}
