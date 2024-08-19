#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] ={19,29,37,17,28,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}