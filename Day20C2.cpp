#include<bits/stdc++.h>
using namespace std;
int main(){
    //Remove all characters from string except alphabets
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    int len = str.size();
    for(int i=0;i<len;i++){
        if(!(str[i] >= 'a' && str[i] <= 'z')&& !(str[i] >= 'A' && str[i] <= 'Z')){
            str.erase(i,1);
            i--;
            len--;
        }
    }
    cout<<"String after removing all characters except alphabets: "<<str<<endl;
    return 0;
}