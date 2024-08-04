#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp = n;
    int p = 0;
    while (n > 0)
    {
        int rem = n % 10;
        p = (p) + (rem * rem * rem);
        n = n / 10;
    }
    if (temp == p)
    {
        cout << "YES,It is a Armstrong number";
    }
    else
    {
        cout << "NO,It is not a Armstrong number";
    }
    return 0;
}