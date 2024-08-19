#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cout <<"Enter the number: ";
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count = count+1;
            if(n/i != i){
                count = count+1;
            }
        }
    }
    if(count == 2){
        cout <<"Prime Number "<<endl;
    }else{
        cout <<"Not a Prime Number "<<endl;
    }
    return 0;
}