#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,29,10,27,10,29,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        bool Unq=true;
        for(int j=0;j<len;j++){
            if(arr[i]==arr[j] && i != j){
                Unq=false;
                break;
            }
        }
        if(Unq){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}