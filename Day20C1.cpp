#include<bits/stdc++.h>
using namespace std;
int main(){
    //Remove spaces from a string
    string str;
    string temp = " ";
    cout << "Enter a string: ";
    getline(cin, str);
    for(int i=0;i<str.size();++i){
        if((str[i] >= 'a' && str[i] <='z')||(str[i] >= 'A' && str[i] <='Z')){
            temp = temp + str[i];
        }
    }
    str = temp;
    cout<<"The string without spaces is: "<<str<<endl;
    return 0;
}