#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Using String Method 1;
    string str;
    cout<<"Enter the String: ";
    getline(cin, str);
    int n = str.size();
    for (int i = 0; i <= n; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            cout << str[i] << " ";
        }
    }
    return 0;
}