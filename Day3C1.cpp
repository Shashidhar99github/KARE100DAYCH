#include <bits/stdc++.h>
using namespace std;
string Greater(int n, int m)
{
    if (n > m)
    {
        return to_string(n) + " is Greater";
    }
    else if (m > n)
    {
       return to_string(m) + " is Greater";
    }
    else
    {
        return "Both are equal";
    }
}
int main()
{
    int n, m;
    cout << "Enter Your Numbers: ";
    cin >> n >> m;
    string result =Greater(n,m);
    cout <<result<<endl;
    return 0;
}