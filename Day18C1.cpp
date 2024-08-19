#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,29,10,27,10,29,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i]==arr[j]){
                cout<<"Duplicate element found: "<<arr[i]<<endl;
            }
        }
    }
    return 0;
}