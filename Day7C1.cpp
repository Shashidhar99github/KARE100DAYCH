#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n;
    cin >>n;
    int original_number = n;
    int sum =0;
    while(n != 0){
        int digit = n%10;
        sum = sum + factorial(digit);
        n=n/10;
    }
    if(sum == original_number){
        cout << "The number is a strong number" ;
    }
    else{
        cout << "The number is not a strong number" ;
    }
    return 0;
}