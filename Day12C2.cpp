#include<bits/stdc++.h>
using namespace std;
int DivS(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0)
            sum = sum + i;
    }
    return sum;
}
int main(){
    int a,b;
    cout <<"Enter the numbers: ";
    cin >> a >> b;
    int s1=DivS(a);
    int s2=DivS(b);
    if(s1/a == s2/b){
        cout <<"are friendly pairs"<<endl;
    }else{
        cout <<"are not friendly pairs"<<endl;
    }

    return 0;
}