#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout <<"Enter the number: ";
    cin >>n;
    int sum =0;
    int temp=n;
    while(temp>0){
        sum = sum +temp %10;
        temp = temp/10;
    }
    if(n%sum == 0){
        cout <<"Harshad Number"<<endl;
    }else{
        cout <<"Not Harshad Number"<<endl;
    }
    return 0;
}