
#include <bits/stdc++.h>
using namespace std;
void primeF(int n) { 
    while (n % 2 == 0) { 
        cout << 2 << " "; 
        n = n / 2; 
    } 
    for (int i = 3; i <= n/2; i = i + 2) { 
        while (n % i == 0){ 
            cout << i << " "; 
            n = n / i; 
        } 
    } 
    if (n > 2) 
        cout << n << " "; 
} 

int main() { 
    int n;
    cout <<"Enter the number: ";
    cin>>n; 
    primeF(n); 
    return 0; 
}
