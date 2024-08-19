#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    int len = str.length();
    for(int i=0;i<len;i++){
        if(i== 0 || i== (len-1)){
            str[i]=toupper(str[i]);
        }else if(str[i] == ' '){
            str[i-1]=toupper(str[i-1]);
            str[i+1]=toupper(str[i+1]);
        }
    }
    cout<<"String: "<<str<<endl;
    return 0;
}