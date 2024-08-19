#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the Character: ";
    cin >> ch;
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int len = vowels.size();
    bool IVo = false;
    for (int i = 0; i < len; i++)
    {
        if (ch == vowels[i])
        {
            IVo = true;
            break;
        }
    }
    if (IVo)
    {
        cout << "The Character is a Vowel";
    }
    else
    {
        cout << "The Character is a Consonant";
    }
    return 0;
}