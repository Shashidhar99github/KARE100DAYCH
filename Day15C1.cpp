#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {19,28,26,9,12,7};
    int sum =0;
    int len = sizeof(arr)/sizeof(arr[0]);
    cout <<"Size of an array: "<<len<<endl;
    for(int i=0;i<len;i++){
        sum = sum + arr[i];
    }
    cout <<"Sum of an array elements is: "<<sum<<endl;
    return 0;
}