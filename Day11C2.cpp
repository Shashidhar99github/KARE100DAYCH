#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cout <<"Enter the number: ";
    cin >>m;
    for(int i=1;i<=m;i++){
        if(m%i==0){
            cout << i <<" ";
        }
    }
    return 0;
}