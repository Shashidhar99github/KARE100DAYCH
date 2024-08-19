#include <bits/stdc++.h>
using namespace std;
int main()
{
    //using vector method 2
    vector<char> v = {'a', 'p', 'p', 'l', 'e'};
    int n = sizeof(v) / sizeof(v[0]);//method 1
    // int n = v.size();//method 2
    for (int i = 0; i <= n; i++)
    {
        if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u')
        {
            cout << v[i] << " ";
        }
    }
    return 0;
}