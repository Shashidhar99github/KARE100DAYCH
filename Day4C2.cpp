#include<bits/stdc++.h>
using namespace std;
int main(){
    cout <<"Enter the number to check palindrome or not: ";
    int n,num,digit,rev=0;
    cin>>n;
    num = n;
    while(num != 0){
        digit = num % 10;
        rev=(rev*10)+digit;
        num = num/10;
    }
    if(n == rev){
        cout<<"The number is palindrome";
    }else{
        cout<<"The number is not palindrome";
    }
    return 0;
}