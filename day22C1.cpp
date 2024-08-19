#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the Character: ";
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << "Alphabet: " <<ch<< endl;
    }
    else
    {
        cout << "Not Alphabet: " <<ch<< endl;
    }
    return 0;
}