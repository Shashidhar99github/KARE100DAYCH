#include<bits/stdc++.h>
using namespace std;
string EvenOrOdd(int num){
    if(num % 2 == 0){
        return "The number is Even";
    }
    else{
        return "The number is Odd";
    }
}
int main(){
    int Number;
    cout<<"Enter a number: ";
    cin >> Number;
    cout <<EvenOrOdd(Number)<<endl;
    return 0;
}