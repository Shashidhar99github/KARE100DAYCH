#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {29,29,27, 59, 12, 29, 70, 32, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    int Enter[n];

    for (int i = 0; i < n; i++)
    {
        if (Enter[i] != 1)
        {
            int c = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    c++;
                    Enter[j] = 1;
                }
            }
            cout << arr[i]<<" Entered "<< c<<" times"<< endl;
        }
    }

    return 0;
}