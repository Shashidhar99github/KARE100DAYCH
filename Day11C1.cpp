#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n <= 1){
        return n;
    }
    int num1=0,num2=1,num3;
    for(int i=2;i<=n;i++){
        num3 = num1+num2;
        cout <<num3<<" ";
        num1=num2;
        num2=num3;
    }
    return num2;
}
int main(){
    int n;
    cout <<"Enter the number: ";
    cin>>n;
    int result = fibonacci(n);
    cout <<"The nth term in Fibonacci series is: "<<result<<endl;
    return 0;
}