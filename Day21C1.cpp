#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter the String: ";
    getline(cin, str);
    int sum = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            sum = sum + (str[i] - '0');
        }
    }
    if(sum == 0) {
        cout << "Numbers not found" << endl;
    } else {
        cout << "Sum of digits: " << sum << endl;
    }

    return 0;
}