#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout <<"Enter the number: ";
    cin >>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum > 2*n){
        cout <<"The number is Abundant Number"<<endl;
    }else{
        cout <<"The number is not a Abundant Number"<<endl;
    }
    return 0;
}