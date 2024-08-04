#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout <<"Enter Your Number: ";
    cin >>n;
    while (n >0){
        int rem = n % 10;
        cout << rem;
        n= n/10;
    }
    return 0;
}
