#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {12,39,28,17,28,92};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    cout <<"The second smallest element is: "<<arr[1]<<endl;
    return 0;
}