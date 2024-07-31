#include<bits/stdc++.h>
using namespace std;
string checkNumber(int num){
    if(num < 0){
        return "Negative";
    }
    else if(num == 0){
        return "Zero";
    }
    else{
        return "Positive";
    }
}
int main(){
    int Number;
    cout << "Enter a number: ";
    cin >> Number;
    cout<<checkNumber(Number)<<endl;
}