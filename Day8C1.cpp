#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,PSquare;
    cout <<"Enter the number: ";
    cin >>n;
    PSquare=sqrt(n);
    if(PSquare*PSquare == n){
        cout <<"Perfect Square"<<endl;
    }else{
        cout <<"Not a Perfect Square"<<endl;
    }
    return 0;
}