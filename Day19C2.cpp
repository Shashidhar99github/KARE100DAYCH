#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    int len = str.size();
    char arr[] = {'a','e','i','o','u','A','E','I','O','U'};
    int lenofarr = sizeof(arr)/sizeof(arr[0]);
    string result="";
    for(int i=0;i<len;i++){
        bool isV = false;
        for(int j=0;j<lenofarr;j++){
            if(str[i] == arr[j]){
                isV = true;
                break;
            }
        }
        if(!isV){
            result = result + str[i];
        }
    }
    cout<<result<<endl;
    
    return 0;
}