#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum = 0;
    cin >>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum = sum +i; 
        }
    }
    if(sum == n){
        cout << "Perfect Number" ;
    }else{
        cout << "Not a Perfect Number" ;
    }
    return 0;
}