#include<bits/stdc++.h>
using namespace std;
int main(){
    // method 3
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    int len = str.size();
    char arr[] = {'a','e','i','o','u'};
    int count =0;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(str[j] == arr[i]){
                count = count+1;
                break;
            }
        }
    }
    cout<<"Number of Vowels: "<<count<<endl;
    
    return 0;
}