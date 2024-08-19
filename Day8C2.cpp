#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int sq = n *n;
    bool isAutomorphic = true;
    while(n>0){
        if(n%10 != sq%10){
            isAutomorphic = false;
            break;
        }
        n=n/10;
        sq=sq/10;
    }
    if(isAutomorphic){
        cout << "Automorphic Number";
    } else {
        cout << "Not a Automorphic Number";
    }
    return 0;
}